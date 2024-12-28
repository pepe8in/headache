#include <stdio.h>

int main () {
	int choice;
	unsigned int entier;
	unsigned char a, b, c, d;

	printf("Entrez \"1\" pour saisir un entier et \"2\" pour saisir ²une adresse : \n");
	scanf("%d", &choice);
	
	switch (choice) {
	case 1:
		printf("Entrez un entier : ");
		scanf("%u", &entier);
		printf("%u = %u.%u.%u.%u\n", entier, entier / 0x1000000, (entier / 0x10000) % 0x100, (entier / 0x100) % 0x100, entier % 0x100);
		return 0; 
	case 2:
		printf("Entrez une adresse IPv4 : ");
		scanf("%hhu.%hhu.%hhu.%hhu", &a, &b, &c, &d);
		entier = a * 0x1000000 + b * 0x10000 + c * 0x100 + d * 0x1; 
		printf("%u.%u.%u.%u = %u\n", a, b, c, d, entier);
		return 0; 
	default:
		printf("%x --- %d ---- %u ---- %c", 0x1000000, 0x1000000, 0x1000000, 0x1000000);
		return 1;
	}
}

