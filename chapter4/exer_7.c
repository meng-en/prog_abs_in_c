#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int DigitalRoot(int n);
int DigitSum(int n);

int main(int argc, char *argv[]) {
	int num[3] = {178, 45237, 66894};
	int i;

	for (i = 0; i < 3; i++) {
		printf("digital root of %10d is %5d\n", num[i], DigitalRoot(num[i]));
	}
	return 0;
}

int DigitalRoot(int n) {
	if (n / 10 == 0) {
		return (n);
	} else {
		return (DigitalRoot(DigitSum(n)));
	}
}

int DigitSum(int n) {
	if (n / 10 == 0) {
		return (n);
	} else {
		return ((n % 10) + DigitSum(n / 10));
	}
}
