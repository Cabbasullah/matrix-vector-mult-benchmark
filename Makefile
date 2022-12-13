all: mylib.o
mylib.o: mylib/mylib.c 
	gcc -o mylib.o -c mylib/mylib.c
test: mylib.o 
	gcc -o main_test.out main_test.c mylib.o

time: mylib.o 
	gcc -o main_b_time.out main_b_time.c mylib.o

space: mylib.o 
	gcc -o main_b_space.out main_b_space.c mylib.o 

clear:
	rm -rf *.o
	rm -rf *.out
	


