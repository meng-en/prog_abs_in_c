#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int GCD(int x, int y);

int main(int argc, char *argv[]) {
	int num1[3] = {15, 357, 1184};
	int num2[3] = {91, 102, 1517};
	int i;

	for (i = 0; i < 3; i++) {
		printf("max common divisor of %6d and %6d is %6d.\n", 
				num1[i], num2[i], GCD(num1[i], num2[i]));
	}
	return 0;
}

int GCD(int x, int y) {
	if ((x % y) == 0) {
		return (y);
	} else {
		return (GCD(y, x % y));
	}
}
