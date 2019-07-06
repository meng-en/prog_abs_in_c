#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int RaiseIntToPower(int n, int k);

int main(int argc, char *argv[]) {
	int num[3] = {5, 17, 28};
	int power[3] = {9, 6, 4};
	int i;

	for (i = 0; i < 3; i++) {
		printf("%4d power of %4d is %10d.\n", 
				power[i], num[i], RaiseIntToPower(num[i], power[i]));
	}
	return 0;
}

int RaiseIntToPower(int n, int k) {
	if (k == 0) {
		return (1);
	} else {
		return (n * RaiseIntToPower(n, k - 1));
	}
}
