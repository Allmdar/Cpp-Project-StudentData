CXX=g++
CFLAGS=-Wall -std=c++11

all: student

student: main.o student.o date.o address.o
	$(CXX) $(CFLAGS) -o $@ $^

main.o: main.cpp student.h
	$(CXX) $(CFLAGS) -c -o $@ $<

student.o: student.cpp student.h address.h date.h
	$(CXX) $(CFLAGS) -c -o $@ $<

date.o: date.cpp date.h
	$(CXX) $(CFLAGS) -c -o $@ $<

address.o: address.cpp address.h
	$(CXX) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o student


run: student
	./student
