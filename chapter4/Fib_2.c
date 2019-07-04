#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Fib(int n);
int AdditiveSequence(int n, int t0, int t1);

int main(int argc, char *argv[]) {
	Fib(30);
	return 0;
}

int Fib(int n) {
	printf("%10s%10s%10s\n", "n", "t0", "t1");
	return (AdditiveSequence(n, 0, 1));
}

int AdditiveSequence(int n, int t0, int t1) {
	printf("%10d%10d%10d\n", n, t0, t1);
	if (n == 0) return (t0);
	if (n == 1) return (t1);
	return(AdditiveSequence(n - 1, t1, t0 + t1));
}
