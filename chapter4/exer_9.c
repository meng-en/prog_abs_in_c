#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"
#include "lib\strlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MaxBufSize 64
char outputStr[MaxBufSize];

string Reserve(string str);
void ReserveStr(string str, int length, char *output);

int main(int argc, char *argv[]) {
	string str[3] = {"component", "configuration", "pineapple"};
	int i;

	for (i = 0; i < 3; i++) {
		printf("the reverse of \"%s\" is \"%s\"\n", str[i], Reserve(str[i]));
	}
	return 0;
}

string Reserve(string str) {
	int len;
	
	len = strlen(str);
	outputStr[len] = '\0';
	ReserveStr(str, len, outputStr);
	return outputStr;
}

void ReserveStr(string str, int length, char *output) {
	if (length <= 0){
		return;
	} else {
		output[0] = str[length - 1];
		return (ReserveStr(str, length - 1, output + 1));
	} 
}
