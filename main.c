/**
 * Funzionalita' da implementare:
 * Addizione
 * Moltiplicazione
 * Autore: Alessandro Tola
 */
#include <stdio.h>

typedef enum {ADDIZIONE, SOTTRAZIONE, MOLTIPLICAZIONE, DIVISIONE} Operazioni;
float addizione(float numero1, float numero2);

int main() {

    int scelta;
    float numero1, numero2;

    float risultato = 0;

    printf("\nScegli operazione:");
    printf("\n-0) Addizione");
    scanf("%d", &scelta);

    printf("\nInserisci il primo numero: ");
    scanf("%f", &numero1);
    printf("\nInserisci il secondo numero: ");
    scanf("%f", &numero2);


    switch(scelta){
        case ADDIZIONE:
            risultato = addizione(numero1, numero2);
            break;
    }

    printf("\nRisultato: %2f", risultato);
    return 0;
}

float addizione(float numero1, float numero2){
    return numero1+numero2;
}