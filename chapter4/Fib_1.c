#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MinIndex  0
#define MaxIndex 30

int Fib(void);
int FibSub(int n);

int main(int argc, char *argv[]) {
	Fib();
	return 0;
}

int Fib(void) {
	int i;
	printf("This program lists the Fibonacci sequence. \n");
	for (i = MinIndex; i <= MaxIndex; i++) {
		printf("Fib(%d) ", i);
		if (i < 10) printf(" ");
		printf(" = %4d\n", FibSub(i));
	}
	return 0;
}

int FibSub(int n) {
	if (n < 2) {
		return (n);
	} else {
		return (FibSub(n-1) + FibSub(n-2));
	}
}
