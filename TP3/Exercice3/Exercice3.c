#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define NBNOTESMAX 30
#define carre(x) (x)*(x)

main() {
	int indice = 0;
	int i = 0;
	int note;
	int reponse;
	int nbsaisies = 0;
	int absence = 0;
	float somme = 0;
	float moyenne;
	int notemax = 0;
	int notemin = 20;
	int tableau[NBNOTESMAX];
	float somme2 = 0;
	float ecartype;
	for (i = 0; i < NBNOTESMAX; i++) {
		tableau[i] = -2;
	}
	while (nbsaisies < NBNOTESMAX) { //Saisie des notes
		reprendre:
		scanf_s("%d", &note);
		if (note < 0 || note > 20) {
			printf("Eleve absent ? Ou voulez-vous arreter la saisie des notes ? A/O/N \n"); //Pour signaler une absence, il faut entrer une note supérieur à 20 ou inférieure à 0. Pareil pour arrêter la saisie.
			do {
				reponse = _getch();
				reponse = toupper(reponse);
			} while (reponse != 'A' && reponse != 'O' && reponse != 'N');
			switch (reponse)
				case 'A': { //Cas d'une absence, on incrémente alors le nombre d'absent de 1.
					printf("Eleve absent");
					absence += 1;
					nbsaisies += 1;
					tableau[i] = -1;
					break;
				case 'O': { //Cas de la fin de saisie.
					printf("Fin de la saisie \n");
					goto fini;
					break;
				case 'N': //Cas de l'erreur de saisie, on reprend alors la saisie.
					printf("Reprendre la saisie");
					goto reprendre;
					break;
				}
			}
		}
		else {
			printf("La note numero %d est %d \n", nbsaisies, note); //Affichage de la note et de son numéro.
			nbsaisies += 1;
			somme +=note;
			tableau[indice] = note;
			if (note >= notemax) {
				notemax = note;
			}
			if (note <= notemin) {
				notemin = note;
			}
		}
	fini:
		printf("Le nombre de notes saisies est %d, il y a %d absences \n", nbsaisies, absence);
		moyenne = somme / nbsaisies;
		printf("La moyenne est %.2f \n La note max est %d et la note min est %d\n", moyenne, notemax, notemin);
		for (i = 0; i < NBNOTESMAX; i++) {
			printf("%d\n", tableau[i]);
		}
		for (i = 0; i < indice; i++) {
			if (tableau[i] != -1) {
				somme2 += carre(tableau[i] - moyenne);
				printf("%.2f", somme2);
			}
		}
	}
	ecartype = sqrtf((1 / 1 - (nbsaisies)) * somme2);
	printf("L'écart type est %.2f", ecartype);
}