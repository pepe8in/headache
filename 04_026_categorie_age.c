#include <stdio.h>

int main() {
    int age;
    char status[20]; 

    printf("Quel âge avez-vous ? ");
    scanf("%d", &age);

    if (age <= 14) {
        snprintf(status, sizeof(status), "Enfant");
    } else if (age <= 24) { 
        snprintf(status, sizeof(status), "Adolescent");
    } else if (age <= 64) { 
        snprintf(status, sizeof(status), "Adulte");
    } else {
        snprintf(status, sizeof(status), "Aîné");
    }

    printf("Votre catégorie est : %s\n", status);
    return 0;
}

