#include <stdio.h>

int main(void)
{
    int primonumero, secondonumero, terzonumero, numpotenze, potenze=1;

    printf("Inserisci il primo numero (che deve essere minore del secondo): \n");
    scanf("%d", &primonumero);
    printf("Inserisci il secondo numero (che deve essere maggiore del primo):\n");
    scanf("%d", &secondonumero);
    printf("Inserisci il terzo numero (dev'essere maggiore del primo e minore del secondo o viceversa):\n");
    scanf("%d", &terzonumero);

    printf("I multipli di %d tra %d e %d sono:\n", terzonumero, primonumero, secondonumero);

    while (numpotenze < secondonumero) {
        if (terzonumero >= primonumero && terzonumero <= secondonumero)
        {
            potenze++;
            numpotenze = potenze*terzonumero;
            printf("%d\n", numpotenze);
        }
        else
        {
            printf("Errore: Il terzo numero inserito non si trova tra i primi due.");
        }
    }
    return 0;
}
