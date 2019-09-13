#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // apagar essa linha para compilar no linux

#define MAX 5

void bubble(int vetor[]);
int binary_sort(int vetor[], int chave, int n);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[MAX], num;

    puts("Digite 5 números inteiros: ");
    for (int i = 0; i < MAX; i++)
    {
        printf("Digite: ");
        scanf("%i", &vetor[i]);
    }
    
    puts("Vetor não ordenado: ");
    for (int i = 0; i < MAX; i++)
        printf("%i ", vetor[i]);

    bubble(vetor);
    puts("\nVetor ordenado: ");

    for (int i = 0; i < MAX; i++)
        printf("%i ", vetor[i]);

    puts("\nAgora digite um número para pesquisar no vetor: ");
    printf("Número: ");
    scanf("%i", &num);

    if (binary_sort(vetor, num, MAX) == 0)
        puts("Elemento não encontrado!");
    else
        puts("Elemento encontrado!");

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
 
int binary_sort(int vetor[], int chave, int n) // faz uma busca binária num vetor ordenado
{
    int inf, sup, meio;
    inf = 0;
    sup = n - 1;
    while (inf <= sup)
    {
        meio = (inf + sup) / 2;
        if (chave == vetor[meio])
            return meio;
        else if (chave < vetor[meio])
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return 0; /* não encontrado */
}