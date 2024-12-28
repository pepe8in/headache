#include <stdio.h>
#include <math.h>

int main () {
	int a;

	printf("Entrez une valeur : ");
	scanf("%d", &a);

	unsigned long fibo = (1 / sqrt(5)) * (pow(((1 + sqrt(5)) / 2), a) - pow(((1 - sqrt(5)) / 2), a));
	printf("F(%d) = %lu\n", a, fibo);

	return 0;
}
