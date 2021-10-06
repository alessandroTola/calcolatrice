/**
 * Funzionalita' da implementare:
 * Addizione
 * Moltiplicazione
 * Autore: Alessandro Tola
 */
#include <stdio.h>
/* Enumerazione che indica il tipo di operazione*/
typedef enum {ADDIZIONE, SOTTRAZIONE, MOLTIPLICAZIONE, DIVISIONE} Operazioni;

float addizione(float a, float b);
float sottrazione(float a, float b);
int main() {

    /* Dichiarazione variabili */
    int scelta;
    float numero1, numero2;

    float risultato = 0;

    /* Istruzioni inserimento dati */
    printf("\nScegli operazione:");
    printf("\n-0) Addizione");
    printf("\n-1) Sottrazione");
    printf("\n-2) Moltiplicazione");
    printf("\n-3) Divisione");
    scanf("%d", &scelta);

    printf("\nInserisci il primo numero: ");
    scanf("%f", &numero1);
    printf("\nInserisci il secondo numero: ");
    scanf("%f", &numero2);


    /* Scelta operazione da eseguire */
    switch(scelta){
        default:
            printf("\nScelta funzionalita' errata");
    }

    /* Stampa risultato */
    printf("\nRisultato: %2f", risultato);
    return 0;
}

float addizione(float a, float b){
    return a-b;
}

float sottrazione(float a, float b){
    return a-b;
}