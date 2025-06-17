#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularmedia(float notas[], int quantidade) {
    float soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

float encontrarmaior(float notas[], int quantidade) {
    float maior = notas[0];
    for (int i = 1; i < quantidade; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

// Fun��o principal
int main(){
    setlocale(LC_ALL, "Portuguese");

    float notas[10];
    for (int i = 0; i < 10; i++) {
        printf("Insira a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    //chamar fun��es
    printf("A maior nota �: %.2f\n", encontrarmaior(notas, 10));
    printf("A m�dia das notas �: %.2f\n", calcularmedia(notas, 10));
    return 0;
}
