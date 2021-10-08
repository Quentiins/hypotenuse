#include <stdio.h>
#include <math.h> // installation de la librairie math.h pour faire la racine carré

int main(void)
{

    float   ac;  // ac est l'hypoténuse
    float   ab;  // ab est un des petits côtés en cm
    float   bc;  // bc est l'autre petit côté en cm

    printf("Quelle est la longueur de ab ?\n");  // on demande la valeur de ab
    scanf("%f", &ab);  //  recopie la saisie de l'utilisateur
    printf("Quelle est la longueur de bc ?\n");  // on demande la valeur de bc
    scanf("%f", &bc); //  recopie la saisie
    ac = sqrt(ab * ab + bc * bc);    // calcul de l'hypoténuse avec sqrt qui va s'occuper de faire la racine carré
    printf("La longueur de l'hypoténuse est de %.2f cm\n", ac);  // impression du résultat avec deux chiffres après la virgule
    return 0;
}
