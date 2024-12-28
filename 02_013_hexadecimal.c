#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int a = 0xfb408be9;
    int b = 42;
    long c = 212063991488173, d = 223196547513038; 
    
    printf("fb40 8be9 : %u\n%X%d\n", a, b, b);
    printf("IF %X THEN %X\n", c, d);
	
    exit(EXIT_SUCCESS);
}
