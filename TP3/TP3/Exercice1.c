#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x)*(x) //Le probl�me se situe � cette ligne. Il faut ajouter des parenth�ses aux x : (x)*(x) pour que le programme fonctionne et donne la bonne valeur de Nb+1.
						//Sans les parenth�ses, le r�sultat de carre(Nb+1), avec Nb = 5, �tait 11.
main() {
	int Nb = 5;
	int a; int b;
	a = carre(Nb);
	b = carre(Nb + 1);
	printf("Le carre de Nb est : %d \nLe carre de Nb+1 est : %d", a, b);
}