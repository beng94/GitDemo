#include <stdio.h>

int func(int, int);
int func1(int, int);

int main() {
	printf("Hello world\n"); 
	printf("sum: %d\n", func(1, 4));
}

int func(int a, int b) {
	return a + b;
}
