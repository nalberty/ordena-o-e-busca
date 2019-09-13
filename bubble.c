#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // apagar essa linha para compilar no linux

#define MAX 4

void bubble(int vetor[]);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[MAX] = {1, 3, 5, 2};

    for (int i = 0; i < MAX; i++)
        printf("%i ", vetor[i]);

    bubble(vetor);
    puts("");

    for (int i = 0; i < MAX; i++)
        printf("%i ", vetor[i]);

    puts("");

    system("pause"); // apagar essa linha para compilar no linux
    return 0;
}

void bubble(int vetor[MAX]) // ordena o vetor usando busca binária
{
    int aux;
    for (int contador = 1; contador < MAX; contador++)
    {
        for (int i = 0; i < MAX - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}