CC= g++
GSM=GSMlib
UMTS=UMTSlib/build
LTE=LTElib/build
NETWORKDUMP=2g-and-4g-dump
OBJ = obj
EXE=Runable_App
all: build run

build:
	$(CC) -o $(OBJ)/lib.o -c $(GSM)/Sibs.cpp
	$(CC) -o $(OBJ)/main.o -c Source.cpp 
	$(CC) -DASN_PDU_COLLECTION -I. -o $(EXE)/$(NETWORKDUMP) $(OBJ)/main.o $(OBJ)/lib.o $(UMTS)/main3g.o $(UMTS)/pdu_collection.o $(UMTS)/libasncodec.a $(LTE)/main4g.o $(LTE)/pdu_collection4G.o  $(LTE)/libasncodec.a -lm
	
	
run:
	./$(EXE)/$(NETWORKDUMP)


clean: 
	$(CC) main.o $(UMTS)/main3g.o $(LTE)/main4g.o -o $(NETWORKDUMP)
	rm *.o
	rm $(NETWORKDUMP)