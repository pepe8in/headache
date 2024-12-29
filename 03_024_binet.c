#include <stdio.h>
#include <math.h>

int main () {
	int a;

	printf("Entrez une valeur : ");
	scanf("%d", &a);
	long double i = sqrtl(5.);

	long double fibo = (powl(((1. + i)/ 2.), a) - powl(((1. - i)/ 2.), a)) / i;
	printf("F(%d) = %.0Lf\n", a, fibo);

	return 0;
}
