#include <stdio.h>
#include <stdlib.h>

int main () {
  int speed, limit, gap, fine, lost_point;

  printf("Risque amande et/ou retrait de points ? Veuillez saisir votre vitesse ainsi que la limitation en vigueur :");
  scanf("%d %d",&speed, &limit);
  
  gap = speed - limit;
  fine = 135;
  lost_point = 1;

  if (gap >= 50) {
    fine = 1500;
    lost_point = 6;
  } else if (gap >= 40) {
    lost_point = 4;
  } else if (gap >= 30) {
    lost_point = 3;
  } else if (gap >= 20) {
    lost_point = 2;
  } else if (gap > 0 && limit > 50) {
    fine = 68;
  } else {
    printf("Vous êtes dans la limite autorisée.\n");
    return EXIT_SUCCESS;
  }
  
  printf("Excès de vitesse détecté : %d km/h au-dessus de la limite.\nAmende : %d euros.\nRetrait de points : %d point(s).\n",gap, fine, lost_point);
  return EXIT_SUCCESS; 
}
