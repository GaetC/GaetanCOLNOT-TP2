#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int score = 100;
    int nombreadeviner = 0, valeurrecuperer = 0;
    const int min = 1, max = 10;
    srand(time(NULL));
    nombreadeviner = (rand() % (max - min + 1)) + min;
    do{
        printf("Donne un nombre : \n ");
        scanf_s("%d", &valeurrecuperer);
        if (nombreadeviner < valeurrecuperer)
            printf("Trop grand \n");
            score = score - 1;
        else if (nombreadeviner > valeurrecuperer)
            printf("Trop petit \n");
            score = score - 1;
        else
            printf("Nombre trouvé et ton score est de %d /100\n", score);
    } while (valeurrecuperer != nombreadeviner);
}