#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long gros_nombre;
    printf("Entrez un gros nombre : ");
    scanf("%lu", &gros_nombre);
    printf("%lu, un gros nombre ? Le plus grand nombre possible avec sera :", gros_nombre);
    gros_nombre = 0xffffffffffffffff;
    printf("%lu\nVoici son affichage héxadécimal : %lx, le type de la variable est un unsigned long qui accepte que les entiers positifs et peut prendre jusqu'à 8 octet et donc 16 numéro f en héxadécimal\n", gros_nombre, gros_nombre); 
    exit(EXIT_SUCCESS);
}
