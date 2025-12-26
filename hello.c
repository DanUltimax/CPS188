#include <stdio.h>

int factorial(int num) {

	int num_fac;
	int i;
	for (i=1; i <= num; i++) {
		num_fac *= i;
	}

	return num_fac;
}

int main() {
	printf("Hello CPS188! - Christmas Day, 2025\n");

	printf("%d", factorial(6));
	return 0;
}
