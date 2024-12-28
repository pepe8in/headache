#include <stdio.h>
#include <stdlib.h>

int main() {
    float racine = 1.414213562373095048;
    printf("racine de 2 vaut %g\n", racine);
    printf("variable : %.18f\n", racine);
    printf("texte    : 1.414213562373095048\n");
    /*Il suffit de choisir un type de flottant plus précis*/
    long double clavier;
    printf("Recopiez :\n>1.414213562373095048\n>");
    scanf("%Lf", &clavier);
    printf("copie : %.18Lf\n", clavier);
    printf("texte : 1.414213562373095048\n");
    
    exit(EXIT_SUCCESS);
}
