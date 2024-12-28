include <stdio.h>
#include <stdlib.h>

int main () {
	
	float a = 0, b = 0; 
	
	printf("Veuillez saisir deux nombres réels : ");
	scanf("%f %f", &a, &b); 
	
	printf("%g + %g = %g\n", a, b, a+b);
	printf("%g + %g = %g\n", a, b, a-b);
	printf("%g + %g = %g\n", a, b, a*b);
	
	return 0; 
}
