#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, temp;
    printf("Veuillez saisir deux valeur \"a\" et \"b\" : ");
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
    temp = a; a = b ; b = temp; 
    printf("Maintenant a = %d et b = %d\n", a, b);
    printf("a - b = %d\n", a - b);
    
    long c;
    c = (long)a * b;
    printf("a * b = %ld\n", a, b, c);
    
    float d;
    d = (float)a / b;
    printf("a / b = %g\n", a, b, d);

    exit(EXIT_SUCCESS);
}
