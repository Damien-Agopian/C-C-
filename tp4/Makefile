CFLAGS=-Wall -Wextra -g -std=c++11
LDFLAGS=

all: exercice4

main: exercice4.o
	g++ $(LDFLAGS) $^ -o $@

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
