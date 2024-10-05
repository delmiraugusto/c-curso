#include <stdio.h>

int main()
{
    double soma, media;
    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n")

    soma = 0;
    printf("\nValores: ");
    for (int i = 0; i < N; i++){
        printf("%.1lf ", vet[i]);
        soma += vet[i];
    }

    media = soma / N;

    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;
}
