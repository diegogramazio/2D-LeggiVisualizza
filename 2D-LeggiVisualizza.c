#include <stdio.h>

/* Programma che legge i valori di un array bidimensionale di elementi di tipo int e
 * lo visualizza in forma matriciale, assumendo che i numeri introdotti abbiano
 * al massimo 3 cifre */
 int main() {
       int numRighe, numColonne;             // dimensione array

       /* leggi dimensioni e crea array */
       printf("Caro utente, quante righe ha la tua matrice?");
       scanf("%d", &numRighe);
       printf("E quante colonne ha la tua matrice?");
       scanf("%d", &numColonne);
       int matrice[numRighe][numColonne];

       /* leggi e visualizza della matrice, uno alla volta */
       for(int i=0; i<numRighe; i++)
             for(int j=0; j<numColonne; j++) {
                   printf("Introduci l'elemento con indice di riga %d ed indice di colonna %d: ", i, j);
                   scanf("%d", &matrice[i][j]);
             }

       /* visualizza la matrice, allineando a destra gli elementi */
       printf("\n");
       for(int i=0; i<numRighe; i++) {
             for(int j=0; j<numColonne; j++)
                   printf("%5d", matrice[i][j]);
             printf("\n");
             system("PAUSE");
       }
 }
