#include <stdio.h>

int main () {
	int choice;
	unsigned int entier;
	unsigned char a, b, c, d;

	printf("Entrez \"1\" pour saisir un entier et \"2\" pour saisir une adresse : \n");
	scanf("%d", &choice);
	
	if (choice == 1) {
		printf("Entrez un entier : ");
		scanf("%u", &entier);
		printf("%u = %u.%u.%u.%u\n", entier, entier / 0x1000000, (entier / 0x10000) % 0x100, (entier / 0x100) % 0x100, entier % 0x100);
		return 0; 
	} else if (choice == 2) {
		printf("Entrez une adresse IPv4 : ");
		scanf("%hhu.%hhu.%hhu.%hhu", &a, &b, &c, &d);
		entier = a * 0x1000000 + b * 0x10000 + c * 0x100 + d * 0x1; 
		printf("%u.%u.%u.%u = %u\n", a, b, c, d, entier);
		return 0; 
	} else {
		printf("Veuillez saisir une option valide '1' ou '2'\n");
		return 1;
	}
}

