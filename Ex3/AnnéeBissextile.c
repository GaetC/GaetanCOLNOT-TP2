#include <stdlib.h>
#include <stdio.h>

int main(){
    int annee;
    printf(" Entrez année: \n");
    scanf_s("%d", &annee);
        if (annee % 4 == 0){
            if (annee % 100 == 0){
                if (annee % 400 == 0)
                    printf("%d est une année bissextile", annee);
                else
                    printf("%d n'est pas une année bissextile", annee);
             }
            else
                printf("%d est une année bissextile", annee);
        }
        else
            printf("%d n'est pas une année bissextile", annee);
     return 0;
}