/*
 * Generic converter template for a selected ASN.1 type.
 * Copyright (c) 2005-2017 Lev Walkin <vlm@lionet.info>.
 * All rights reserved.
 *
 * To compile with your own ASN.1 type, redefine the PDU as shown:
 *
 * cc -DPDU=MyCustomType -o myDecoder.o -c converter-example.c
 */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#define __EXTENSIONS__
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>   /* for atoi(3) */
#include <getopt.h>   /* for getopt(3) */
#include <string.h>   /* for strerror(3) */
#include <sysexits.h> /* for EX_* exit codes */
#include <errno.h>    /* for errno */
#include <unistd.h>   /* for isatty(3) */
#include <asn_application.h>
#include <asn_internal.h> /* for ASN__DEFAULT_STACK_MAX */

/* Convert "Type" defined by -DPDU into "asn_DEF_Type" */
#ifdef PDU
#define ASN_DEF_PDU(t) asn_DEF_##t
#define DEF_PDU_Type(t) ASN_DEF_PDU(t)
#define PDU_Type DEF_PDU_Type(PDU)
extern asn_TYPE_descriptor_t PDU_Type; /* ASN.1 type to be decoded */
#define PDU_Type_Ptr (&PDU_Type)
#else /* !PDU */
#define PDU_Type_Ptr NULL
#endif /* PDU */

#ifdef ASN_PDU_COLLECTION /* Generated by asn1c -pdu=... */
extern asn_TYPE_descriptor_t *asn_pdu_collection4G[];
#endif

#ifndef NO_ASN_PDU
#if !defined(PDU) && !defined(ASN_PDU_COLLECTION)
#error Define -DPDU to compile this example converter.
#error `asn1c -pdu=...` adds necessary flags automatically.
#endif
#endif

int parse4G()
{
    FILE *binary_out;
    asn_TYPE_descriptor_t *pduType = PDU_Type_Ptr;
    asn_TYPE_descriptor_t *anyPduType = PDU_Type_Ptr;
    ssize_t suggested_bufsize = 8192; /* close or equal to stdio buffer */
    int number_of_iterations = 1;
    int num;
    int ch;
    enum asn_transfer_syntax isyntax = ATS_UNALIGNED_BASIC_PER;
    enum asn_transfer_syntax osyntax = ATS_NONSTANDARD_PLAINTEXT;
    pduType = asn_pdu_collection4G[0];
    printf("name: %s\n", pduType->name);

    void *structure = 0; /* Decoded structure */

    printf("info pduType: %s\n   ", pduType->name);
    setvbuf(stdout, 0, _IOLBF, 0);

    uint8_t packet[] =
        {
            0x60, 0xc8, 0x20, 0x21, 0x90, 0x40, 0x43, 0x6b,
            0x5a, 0x00, 0x9c, 0x80, 0x70, 0x2e, 0xa1, 0x10,
            0x80, 0x84, 0x04, 0x21, 0x41, 0x11, 0x08, 0xdd,
            0xc0, 0x00};

    uint8_t *i_bptr = packet;
    size_t i_size = sizeof(packet);
    printf("start decode,size %ld\n", i_size);
    asn_dec_rval_t rval;
    ASN_STRUCT_FREE(*pduType, structure);
    rval = asn_decode(0, isyntax, pduType, (void **)&structure,
                      i_bptr, i_size);

    switch (rval.code)
    {
    case RC_OK:
        asn_fprint(stdout, pduType, structure);
        ASN_STRUCT_FREE(*pduType, structure);
        printf("RC_OK\n");
        break;
    case RC_WMORE:
        ASN_STRUCT_FREE(*pduType, structure);
        printf("RC_WMORE\n");
    case RC_FAIL:
        ASN_STRUCT_FREE(*pduType, structure);
        printf("RC_FAIL\n");
    default:
        break;
    }
    printf("end decode\n");
    return 0;
}

static struct dynamic_buffer
{
    uint8_t *data;       /* Pointer to the data bytes */
    size_t offset;       /* Offset from the start */
    size_t length;       /* Length of meaningful contents */
    size_t unbits;       /* Unused bits in the last byte */
    size_t allocated;    /* Allocated memory for data */
    int nreallocs;       /* Number of data reallocations */
    off_t bytes_shifted; /* Number of bytes ever shifted */
} DynamicBuffer;

static int
is_syntax_PER(enum asn_transfer_syntax syntax)
{
    return (syntax == ATS_UNALIGNED_BASIC_PER || syntax == ATS_UNALIGNED_CANONICAL_PER);
}

static int
restartability_supported(enum asn_transfer_syntax syntax)
{
    return !is_syntax_PER(syntax);
}

/* Dump the buffer out to the specified FILE */
static int write_out(const void *buffer, size_t size, void *key)
{
    FILE *fp = (FILE *)key;
    return (fwrite(buffer, 1, size, fp) == size) ? 0 : -1;
}

static int argument_is_stdin(char *av[], int idx)
{
    if (strcmp(av[idx], "-"))
    {
        return 0; /* Certainly not <stdin> */
    }
    else
    {
        /* This might be <stdin>, unless `./program -- -` */
        if (strcmp(av[-1], "--"))
            return 1;
        else
            return 0;
    }
}

static FILE *argument_to_file(char *av[], int idx)
{
    return argument_is_stdin(av, idx) ? stdin : fopen(av[idx], "rb");
}

static char *argument_to_name(char *av[], int idx)
{
    return argument_is_stdin(av, idx) ? "standard input" : av[idx];
}

#ifdef JUNKTEST
/*
 * Fill bytes with some garbage with specified probability (more or less).
 */
static void
junk_bytes_with_probability(uint8_t *buf, size_t size, double prob)
{
    static int junkmode;
    uint8_t *ptr;
    uint8_t *end;
    if (opt_jprob <= 0.0)
        return;
    for (ptr = buf, end = ptr + size; ptr < end; ptr++)
    {
        int byte = *ptr;
        if (junkmode++ & 1)
        {
            if ((((double)random() / RAND_MAX) < prob))
                byte = random() & 0xff;
        }
        else
        {
#define BPROB(b) ((((double)random() / RAND_MAX) < prob) ? b : 0)
            byte ^= BPROB(0x80);
            byte ^= BPROB(0x40);
            byte ^= BPROB(0x20);
            byte ^= BPROB(0x10);
            byte ^= BPROB(0x08);
            byte ^= BPROB(0x04);
            byte ^= BPROB(0x02);
            byte ^= BPROB(0x01);
        }
        if (byte != *ptr)
        {
            *ptr = byte;
        }
    }
}
#endif /* JUNKTEST */
