#include <stdlib.h> 
#include <stdio.h>


int main() {
	float L;
	float l;
	float p;
	float valeur1;
	float valeur2;
	float valeur3;
	printf("Donnez la largeur du bagage\n");
	scanf_s("%f", &L);
	printf("Donnez la largeur du bagage\n");
	scanf_s("%f", &l);
	printf("Donnez la profondeur du bagage\n");
	scanf_s("%f", &p);
	if (p > 25) {
		valeur1 = p;
		if (valeur1 > 35) {
			valeur2 = valeur1;
			if (valeur2 > 55) {
				printf("Les valeurs ne correspondent pas aux dimensions autorisées");
			}
			else {
				L = valeur2;
			}
		}
		else {
			l = valeur1;
		}
	}
	else {
		if (l > 35) {
			valeur1 = l;
			if (valeur1 > 55) {
				printf("Les valeurs ne correspondent pas aux dimensions autorisées");
			}
			else {
				L = valeur1;
			}
		}
		else {
			if (L > 55) {
				printf("Les valeurs ne correspondent pas aux dimensions autorisées");
			}
		}
	}
	printf("Votre bagage est éligible à l'embarquement");
}
