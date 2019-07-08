#include <stdio.h>
#include <stdlib.h>
#include "lib\genlib.h"
#include "lib\strlib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool IsPalindrome(char str[]);
static bool CheckPalindrome(char str[], int len);

int main(int argc, char *argv[]) {
	string str1 = "nononononon";
	string str2 = "nononon1non";

	printf("%20s is %sa palindrome.\n", str1, IsPalindrome(str1)?"":"not ");
	printf("%20s is %sa palindrome.\n", str2, IsPalindrome(str2)?"":"not ");

	return 0;
}

bool IsPalindrome(char str[]) {
	return (CheckPalindrome(str, strlen(str)));
}

static bool CheckPalindrome(char str[], int len) {
	if (len <= 1) {
		return (TRUE);
	} else {
		return (str[0] == str[len-1]
				&& CheckPalindrome(str+1, len-2));
	}
}
