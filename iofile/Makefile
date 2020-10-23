# comint
main: test.o fw.o Mytest.o
	g++ -std=c++17 test.o fw.o Mytest.o -o test
test.o: test.cpp
	g++ -std=c++17 test.cpp -c
fw.o: fw.cpp
	g++ -std=c++17 fw.cpp -c
Mytest.o: Mytest.cpp
	g++ -std=c++17 Mytest.cpp -c

clean:
	rm -f *.o *~
