#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"
#include "lib\strlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MaxBufSize 64
char outputStr[MaxBufSize];

string IntegerToString1(int n);
string IntToStr(int n, string output);

int main(int argc, char *argv[]) {
	string num[3] = {123, 69874, 314159};
	int i;

	for (i = 0; i < 3; i++) {
		printf("the string of %d is \"%s\"\n", num[i], IntegerToString1(num[i]));
	}
	return 0;
}

string IntegerToString1(int n) {
	outputStr[MaxBufSize - 1] = '\0';
	return (IntToStr(n, outputStr + MaxBufSize - 2));
}

string IntToStr(int n, string output) {
	if (n / 10 == 0){
		output[0] = n + '0';
		return (output);
	} else {
		output[0] = n % 10 + '0';
		return (IntToStr(n / 10, output - 1));
	} 
}
