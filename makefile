CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -g #-Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp1 # nome do executavel que sera gerado, nao troque
TMPOUT=tp1.testresult
BUILD=./build/
SRC=./src/
INCLUDE=./include/
AGENDA=Agenda/
ORD=Ordering/

$(EXEC):	$(BUILD)main.o $(BUILD)$(AGENDA)Lectures.o $(BUILD)$(AGENDA)Planet.o $(BUILD)$(ORD)MergeSort.o $(BUILD)$(ORD)RadixSort.o
	$(CC) $(CFLAGS) -o $(EXEC) $(BUILD)main.o $(BUILD)$(AGENDA)*.o $(BUILD)$(ORD)*.o

$(BUILD)main.o:	$(SRC)main.cpp $(INCLUDE)$(AGENDA)Lectures.hpp  
	$(CC) $(CFLAGS) -I $(INCLUDE)$(AGENDA) -I $(INCLUDE)$(ORD) -c $(SRC)main.cpp -o $(BUILD)main.o

$(BUILD)$(AGENDA)Lectures.o: $(SRC)$(AGENDA)Lectures.cpp $(INCLUDE)$(AGENDA)Lectures.hpp $(INCLUDE)$(AGENDA)Planet.hpp  $(INCLUDE)$(ORD)MergeSort.hpp $(INCLUDE)$(ORD)RadixSort.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)$(ORD) -I $(INCLUDE)$(AGENDA) -c $(SRC)$(AGENDA)Lectures.cpp -o $(BUILD)$(AGENDA)Lectures.o

$(BUILD)$(AGENDA)Planet.o:	$(SRC)$(AGENDA)Planet.cpp $(INCLUDE)$(AGENDA)Planet.hpp
	$(CC) $(CFLAGS) -c $(SRC)$(AGENDA)Planet.cpp -o $(BUILD)$(AGENDA)Planet.o

$(BUILD)$(ORD)MergeSort.o:	$(SRC)$(ORD)MergeSort.cpp $(INCLUDE)$(ORD)MergeSort.hpp $(INCLUDE)$(AGENDA)Planet.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)$(AGENDA) -c $(SRC)$(ORD)MergeSort.cpp -o $(BUILD)$(ORD)MergeSort.o

$(BUILD)$(ORD)RadixSort.o:	$(SRC)$(ORD)RadixSort.cpp $(INCLUDE)$(ORD)RadixSort.hpp $(INCLUDE)$(AGENDA)Planet.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)$(AGENDA) -c $(SRC)$(ORD)RadixSort.cpp -o $(BUILD)$(ORD)RadixSort.o


test:	$(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)