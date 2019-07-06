#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int callCounter[2] = {0, 0};

int Fib1(int n);
int Fib2(int n);
int AdditiveSequence(int n, int t0, int t1);

int main(int argc, char *argv[]) {
	int num = 16;
	int i;

	printf("Number of calls:\n");
	printf("%4s%10s%10s.\n", "N", "Fib1", "Fib2");
	printf("%4s%10s%10s.\n", "--", "----", "----");

	for (i = 0; i < num; i++) {
		callCounter[0] = 0; Fib1(i);
		callCounter[1] = 0; Fib2(i);

		printf("%4d", i);
		printf("%10d", callCounter[0]);
		printf("%10d\n", callCounter[1]);
	}
	return 0;
}

// result can be verified at https://www.dcode.fr/fibonacci-numbers

int Fib1(int n) {
	callCounter[0] ++;

	if (n == 0) {
		return (0);
	} else if (n == 1) {
		return (1);
	} else {
		return (Fib1(n - 1) + Fib1(n - 2));
	}
}

int Fib2(int n) {
	callCounter[1] ++;
	AdditiveSequence(n, 0, 1);
}

int AdditiveSequence(int n, int t0, int t1) {
	callCounter[1] ++;
	if (n == 0) {
		return (t0);
	} else if (n == 1) {
		return (t1);
	} else {
		return (AdditiveSequence(n - 1, t1, t0 + t1));
	}
}
