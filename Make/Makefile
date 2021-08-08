CC = g++
CXXFLAGS = -Wall -O2
OBJS = hi.o hello.o main.o

%.o : %.cc 
	$(CC) $(CXXFLAGS) -c $<

main : $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o main

.PHONY: clean
clean:
	rm -f $(OBJS) main

-include %(OBJS:.o=.d)