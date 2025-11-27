#include <stdio.h>

06

07 int main() {

08 //declaração do vetor que conterá 10 números de tipo inteiro (por isso int) + variáveis de tipo float (a média final dos elementos será um número real)

09 int vetor[10], i, maior, menor;

10 float soma = 0, media;

11

12 //solicitação para digitar os 10 números do vetor

13 printf("Digite 10 elementos:\n");

14 for (i = 0; i < 10; i++) {

15 printf("Elemento %d: ", i+1);

16 scanf("%d", &vetor[i]);

17 soma += vetor[i];

18 }

19 //fórmula onde irá calcular todos os números do vetor

20 media = soma / 10;

21 maior = vetor[0];

22 menor = vetor[0];

23

24 //for onde mostra nº tal = maior e nº tal = menor

25 for (i = 1; i < 10; i++) {

26 if (vetor[i] > maior)

27 maior = vetor[i];

28 if (vetor[i] < menor)

29 menor = vetor[i];

30 }

31

32 //saída dos resultados dos vetor com a média, o número maior e menor solicitados

33 printf("\nMedia dos elementos: %.2f\n", media);

34 printf("Maior elemento: %d\n", maior);

35 printf("Menor elemento: %d\n", menor);

36

37 return 0;

38 }