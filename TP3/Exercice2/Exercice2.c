#include<stdlib.h>
#include<stdio.h>

main() {
	int octet;
	int bit;
	int i = 0;
	unsigned int nb = 2868838400;
	octet = sizeof(nb);
	bit = octet * 8;
	printf("%d octet(s) et %d bit(s) pour representer le nombre entier.", octet, bit); //ffichage du nombre d'octets et de bits.

	for (i = 1; i <= 32; i++) {
		if ((1 & nb) == 1) {
			printf("\n BIT %d: ON", i); // "\n" pour un affichage en colonne.
		}
		else {
			printf("\n BIT %d: OFF", i);
		}
		nb = nb >> 1;
	}
	printf("\n Bye!");
}