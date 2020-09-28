#include <stdlib.h> 
#include <stdio.h>



int main() {
	unsigned short int n;
	scanf_s("%hu", &n);
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;


	unsigned short int valeur1 = 65535 ;
	

	for (i1 = 1; i1 <= n; i1++) {
		if (n >= valeur1) {
			printf("valeur incorrecte (au dessus de la limite)\n");
			return 0;
		}
		c1 += i1;
	}
	printf("%d \n", c1);


	while (i2 < 101) {
		c2 += i2;
		i2 ++;
	}
	printf("%d \n", c2);


	do {
		c3 += i3;
		i3++;
	}
	while (i3 <= 100);
	printf("%d \n", c3);

	while (i4 <= valeur1) {
		c4 += i4;
		if (valeur1 - c4 >= i4) {
			break;
		}
		i4++;
	}
	printf("%d \n", c4);
	
}