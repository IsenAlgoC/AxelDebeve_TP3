#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x)*(x) //Le problème se situe à cette ligne. Il faut ajouter des parenthèses aux x : (x)*(x) pour que le programme fonctionne et donne la bonne valeur de Nb+1.
						//Sans les parenthèses, le résultat de carre(Nb+1), avec Nb = 5, était 11.
main() {
	int Nb = 5;
	int a; int b;
	a = carre(Nb);
	b = carre(Nb + 1);
	printf("Le carre de Nb est : %d \nLe carre de Nb+1 est : %d", a, b);
}