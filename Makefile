CC = g++
CFLAGS = -g -Wall -std=c++11
DEPS = CPU.h RAM.h
OBJ = test6502.o CPU.o RAM.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAFGS)

test6502: $(OBJ)
	$(CC) -o test6502 $^ $(CFLAGS)

clean:
	rm -f test6502 *.o
