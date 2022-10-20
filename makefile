CC = g++
CFLAGS = -std=c++17 -g -Wall

F0  = p04_code_analyzer
FH  = .h
FCC = .cc

PROGRAM = p04_code_analyzer

all: $(PROGRAM)
$(PROGRAM): $(F0)$(FCC)
	$(CC) $(CFLAGS) $(F0)$(FCC) -o $(PROGRAM)

.PHONY: clean
clean:
	rm -rf $(PROGRAM)
	rm -rf fileout.txt