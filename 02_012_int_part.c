#include <stdio.h>

int main () {
	long double a; 
	
	printf("Entrez un réel : ");
	scanf("%Lf", &a);
	printf("La partie entière de %Lg est %.0Lf\n", a, a);

	return 0; 
}
