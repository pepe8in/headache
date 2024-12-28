#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage : Spécifier le mode à l'éxécution : .\\exe <code|decode>\n", argv[0]);
		return -1;
	}
	
	const char *mode = argv[1];
	unsigned char first;
	unsigned char second;
	unsigned char third;
	unsigned char fourth;
	unsigned int integer;
	float ieee;

	if (strcmp(mode, "code") == 0) {
		printf("Saisissez quatre caractères : ");
		scanf("%c%c%c%c", &first, &second, &third, &fourth);
		/*Coller de gauche à droite chaque bit sur un entier : chaque octet (char) doit être positionné correctement dans l'entier -> décalage a gauche en multipliant chaque octet par 2^indice de l'octet*8(nombres de bits d'un otcet)*/
		integer = first + second * 0x100 + third * 0x10000 + fourth * 0x1000000;
		ieee = *((float*)&integer);
		printf("Codage : %.8e\n", ieee);
		return 0;
	} else if (strcmp(mode, "decode") == 0) {
		printf("Saisissez un réel : ");
		scanf("%f", &integer);
		first = integer;
		second = integer / 0x100;
		third = integer / 0x10000;
		fourth = integer / 0x1000000;
		printf("Décoder : %c%c%c%c\n", first, second, third, fourth);
		return 0;
	} else {
		printf("Mode inexistant, utilisez 'code' ou 'decode'\n");
		return -1;
	}
}
