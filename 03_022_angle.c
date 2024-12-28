#include <stdio.h>
#include <math.h>

int main () {
	double angle, radians;

	printf("Entrez un angle : ");
	scanf("%lf", &angle);
	
	radians = angle * M_PI / 180.0;
	printf("cos(%g°) = %g\n", angle, cos(radians));
	printf("sin(%g°) = %g\n", angle, sin(radians));
	
	return 0; 
}
