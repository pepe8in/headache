#include <stdio.h>

int main() {
    int age;
    char status[20]; 

    printf("Quel âge avez-vous ? ");
    scanf("%d", &age);

    if (age >= 18 && age <= 25) {
      printf("Vous êtes dans la catégorie des jeunes de 18 à 25 ans.\n");
    } else {
      printf("Vous n'êtes pas dans la catégorie des jeunes de 18 à 25 ans.\n");
    }

    return 0;
}

