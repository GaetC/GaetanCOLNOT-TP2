#include <stdlib.h> 
#include <stdio.h>


int main() {
	float L;
	float l;
	float p;

	scanf_s("Donner la longueur %f\n", &L);
	scanf_s("Donner la largeur %f\n", &l);
	scanf_s("Donner la profondeur %f \n", &p);

	if (L > 151.f && L < 1.f) {
		printf("La longueur n'est pas valide, elle doit être comprise entre 1 et 150cm\n Donner la longueur\n");
		scanf_s("Donner la longueur %f\n", &L);
	}
	if (l > 151.f && l < 1.f) {
		printf("La largeur n'est pas valide, elle doit être comprise entre 1 et 150cm\n Donner la largeur\n");
		scanf_s("Donner la largeur %f\n", &l);
	}
	if (p > 151.f && p < 1.f) {
		printf("La profondeur n'est pas valide, elle doit être comprise entre 1 et 150cm\n Donner la profondeur\n");
		scanf_s("Donner la profondeur %f \n", &p);
	}
	if (L > 55.f) {
		printf("La longueur n'est pas valide, elle doit être inférieur à 55cm\n Donner la longueur\n");
		scanf_s("Donner la longueur %f\n", &L);
	}
	if (l > 35.f) {
		printf("La longueur n'est pas valide, elle doit être inférieur à 35cm\n Donner la longueur\n");
		scanf_s("Donner la longueur %f\n", &L);
	}
	if (p > 25.f) {
		printf("La longueur n'est pas valide, elle doit être inférieur à 25cm\n Donner la longueur\n");
		scanf_s("Donner la longueur %f\n", &L);
	}

}