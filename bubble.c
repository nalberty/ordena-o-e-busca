#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // apagar essa linha para compilar no linux

#define MAX 3

void bubble(int *vetor[]);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[MAX];

    for (int i = 0; i < MAX; i++)
    {
        printf("Digite um número: ");
        scanf("%i", &vetor[i]);
    }

    system("pause"); // apagar essa linha para compilar no linux
    return 0;
}

void bubble(int *vetor[])  // ordena o vetor usando busca binária 
{
    int aux;
    for (int i = 0; i < MAX; i++)
    {
        if (vetor[i] < vetor[i + 1])
        {
            aux = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
        }
    }
}