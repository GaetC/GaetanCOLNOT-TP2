#include <stdlib.h>
#include <stdio.h>

int main(){
    int annee;
    printf(" Entrez ann�e: \n");
    scanf_s("%d", &annee);
        if (annee % 4 == 0){
            if (annee % 100 == 0){
                if (annee % 400 == 0)
                    printf("%d est une ann�e bissextile", annee);
                else
                    printf("%d n'est pas une ann�e bissextile", annee);
             }
            else
                printf("%d est une ann�e bissextile", annee);
        }
        else
            printf("%d n'est pas une ann�e bissextile", annee);
     return 0;
}