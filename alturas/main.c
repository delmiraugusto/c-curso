#include <stdio.h>


int main()
{
   int N, cont;
   double soma, alturaFinal, porcentagem;

   printf("Quantas pessoas serao digitadas? ");
   scanf("%d", &N);

   char nome[N][50];
   int idade[N];
   double altura[N];
   for (int i = 0; i < N;  i++){
       printf("Dados da %da pessoa:\n", i+1);
       printf("Nome: ");
       fseek(stdin, 0, SEEK_END);
       gets(nome[i]);
       printf("Idade: ");
       scanf("%d", &idade[i]);
       printf("Altura: ");
       scanf("%lf", &altura[i]);
   }
   soma = 0;
   for (int i = 0; i < N; i++){
        soma = altura[i] + soma;
   }
   alturaFinal = soma / N;
   printf("\nAltura Media = %.2lf\n", alturaFinal);

    cont = 0;
    for (int i = 0; i < N;  i++){
        if (idade[i] < 16){
            cont++;
        }
    }
    porcentagem = (double) cont * 100 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);

    for (int i = 0; i < N;  i++){
        if (idade[i] < 16){
           printf("%s\n",nome[i]);
        }
    }

   return 0;
}
