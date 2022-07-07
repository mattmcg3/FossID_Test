#include <stdio.h>

int minVal(int a, int b);
int maxVal(int a, int b);
int fib(int n);


int main(int argc, char* argv[]) {
	printf("FossID Testing Program\n");
	printf("Minimum value is: %d\n", minVal(10, 15));
	printf("Maximum value is: %d\n", maxVal(10, 15));
	printf("Fib Sequence: %d, %d, %d, %d, %d, %d, %d, %d\n", fib(0), fib(1), fib(2), fib(3), fib(4), fib(5), fib(6), fib(7));

}

int minVal(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

int maxVal(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int fib(int n) {
	if (n <= 1)
		return n;
	else
		return (fib(n-2)) + (fib(n-1));
}
