#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Fib(int n);
int AdditiveSequence(int n, int t0, int t1);

int main(int argc, char *argv[]) {
	int num[3] = {15, 27, 34};
	int i;

	for (i = 0; i < 3; i++) {
		printf("Fib(%6d) is %16d.\n", 
				num[i], Fib(num[i]));
	}
	return 0;
}

// result can be verified at https://www.dcode.fr/fibonacci-numbers
int Fib(int n) {
	AdditiveSequence(n, 0, 1);
}

int AdditiveSequence(int n, int t0, int t1) {
	if (n == 0) {
		return (t0);
	} else if (n == 1) {
		return (t1);
	} else {
		return (AdditiveSequence(n - 1, t1, t0 + t1));
	}
}
