#include <stdio.h>

05

06 int main() {

07

08 //declaração das variáveis de tipo float pois são números reais

09 float n1, n2, n3, mediaFinal;

10

11 //solicitação da 1º nota

12 printf("Digite a primeira nota: ");

13 scanf("%f", &n1);

14

15 //solicitação da 2º nota

16 printf("Digite a segunda nota: ");

17 scanf("%f", &n2);

18

19 //solicitação da 3º nota

20 printf("Digite a terceira nota: ");

21 scanf("%f", &n3);

22

23 //fórmula do cálculo das médias

24 mediaFinal = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

25

26 // + a saída com o resultado da fórmula

27 printf("Media final: %.2f\n", mediaFinal);

28

29 //e baseado nas médias se for abaixo de 6 = reprovado, acima de 6 = aprovado

30 if (mediaFinal >= 6)

31 printf("Aluno Aprovado :)))\n");

32 else

33 printf("Aluno Reprovado :(((\n");

34

35 return 0;

36 }