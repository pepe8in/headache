#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int p = 4285404239, k = 2015201261, code;
    long res;

    printf("Code : ");
    scanf("%x", &code);
    res = ((long)code * k) % p; 
    printf("Message : %X\n", res);
    
    exit(EXIT_SUCCESS);
}
