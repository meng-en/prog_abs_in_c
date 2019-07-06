#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int PascalTriangle(int n, int k);

int main(int argc, char *argv[]) {
	int num_n[3] = {4, 5, 6};
	int num_k[3] = {1, 3, 4};
	int i;

	for (i = 0; i < 3; i++) {
		printf("the %d-th number of line %d in PascalTriangle is %5d\n", 
				num_k[i], num_n[i], PascalTriangle(num_n[i], num_k[i]));
	}
	return 0;
}

int PascalTriangle(int n, int k) {
	if (n < k) {
		printf("paramter error!");
		return -1;
	}

	if ((k == 0) || (k == n)) {
		return (1);
	} else {
		return (PascalTriangle(n - 1, k - 1) + PascalTriangle(n - 1, k));
	}
}
