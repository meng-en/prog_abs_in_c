#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"
#include "lib\strlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FindStringInSortedArray(string key, string array[], int n);

int main(int argc, char *argv[]) {
	string str[2] = {"rst", "stu"};
	string strArray[] = {
		"abc", "def", "ghi", "jkl",
		"mno", "pqr", "stu", "vwx",
		"yz"};
	int i, length, retval;

	length = sizeof(strArray) / sizeof(string);
	printf("String array:\n");
	for (i = 0; i < length; i++) {
		printf("\"%s\" ", strArray[i]);
	}
	printf("\n\n");

	for (i = 0; i < 2; i++) {
		retval = FindStringInSortedArray(str[i], strArray, length);
		if (retval == -1) {
			printf("Cannot find \"%s\".\n", str[i]);
		} else {
			printf("Index of \"%s\" is %d.\n", str[i], retval);
		}
	}
	return 0;
}

int FindStringInSortedArray(string key, string array[], int n) {
	int mid, cmp, retval;

	if (n < 0) return (-1);
	mid = n / 2;
	cmp = StringCompare(key, array[mid]);
	if (cmp == 0) return (mid);
	if (cmp < 0) {
		return (FindStringInSortedArray(key, array, mid - 1));
	} else {
		// return (mid + FindStringInSortedArray(key, &array[mid + 1], n - mid - 1));
		return (((retval = FindStringInSortedArray(key, &array[mid + 1], n - mid - 1)) == -1) ? (retval) : (retval + mid + 1));
	}
}
