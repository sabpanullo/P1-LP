#include <stdio.h>

3. int main(){

4. //declaração das variáveis de tipo float pq são números "quebrados"

5. float comprimento, largura, altura, volume;

6.

7. //solicitação do comprimento da caixa

8. printf("Digite o comprimento da caixa: ");

9. scanf("%f", &comprimento);

10.

11. //solicitação da largura da caixa

12. printf("Digite a largura da caixa: ");

13. scanf("%f", &largura);

14.

15. //solicitação da altura da caixa

16. printf("Digite a altura da caixa: ");

17. scanf("%f", &altura);

18.

19. //fórmula do cálculo do volume

20. volume = comprimento * largura * altura;

21.

22. //saída com o resultado do volume da caixa

23. printf("O volume da caixa e: %.2f\n", volume);

24.

25. return 0;

26. }