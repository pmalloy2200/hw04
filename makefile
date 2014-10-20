CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

fib: fib.o
	$(CC) $(LFLAGS) -o $@ $^ $(LIBS)
fib-rec: fib-rec.o
	$(CC) $(LFLAGS) -o $@ $^ $(LIBS)
clean:
	rm -f *.o
veryclean: clean
	rm -f fib fib-rec
