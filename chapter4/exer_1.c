#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"
// #include "lib\strlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int BallNum(unsigned n);

int main(int argc, char *argv[]) {
	unsigned int level[3] = {9, 36, 178};
	int i;

	for (i = 0; i < 3; i++) {
		printf("ball number in a tower of %6d level is %d.\n", 
				level[i], BallNum(level[i]));
	}
	return 0;
}

int BallNum(unsigned n) {
	if (n == 0) {
		return (0);
	} else {
		return (n * n + BallNum(n - 1));
	}
}
