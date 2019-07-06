#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"
// #include "lib\strlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool IsEven(unsigned n);
bool IsOdd(unsigned n);

int main(int argc, char *argv[]) {
	unsigned int number[3] = {996, 365, 798};
	int i;

	for (i = 0; i < 3; i++) {
		printf("%10d is %s.\n", number[i], IsEven(number[i])?"even":"odd");
	}
	return 0;
}

bool IsEven(unsigned n)
{
	if (n == 0) {
		return (TRUE);
	} else {
		return (IsOdd(n - 1));
	}
}

bool IsOdd(unsigned n)
{
	return (!IsEven(n));
}