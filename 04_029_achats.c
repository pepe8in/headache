#include <stdio.h>
#include <stdlib.h>

int main () {
  int my_funds, price_items, discount;
  float price_discount;

  printf("Votre argent : ");
  scanf("%d", &my_funds);
  if (my_funds < 0) {
    printf("Erreur : Le montant d'argent ne peut pas être négatif.\n");
    return EXIT_FAILURE;
  }

  printf("Le prix de l'article (hors soldes) : ");
  scanf("%d", &price_items);
  if (price_items < 0) {
    printf("Erreur : Le prix de l'article ne peut pas être négatif.\n");
    return EXIT_FAILURE;
  }

  printf("Remise en %% : ");
  scanf("%d", &discount);
  if (discount < 0) {
    printf("Erreur : La remise ne peut pas être négative.\n");
    return EXIT_FAILURE;  
  }

  price_discount = price_items * (1.0 - discount / 100.0);
  printf("L'article en solde vaut %.2f\n", price_discount);
  
  if (my_funds >= price_discount) {
    printf("J'achète\n");
  } else {
    printf("Je n'ai pas assez d'argent\n");
  }
  return EXIT_SUCCESS;
}
