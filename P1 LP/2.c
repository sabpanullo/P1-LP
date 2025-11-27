#include <stdio.h>

4.

5. int main() {

6.

7. //variáveis de tipo inteiro (conta) - pois são números inteiros / e float (saldo, débito, crédito e saldoAtual) - pois são números reais

8. int conta;

9. float saldo, debito, credito, saldoAtual;

10.

11. //solicitação do número da conta

12. printf("Digite o numero da conta: ");

13. scanf("%d", &conta);

14.

15. //solicitação do saldo

16. printf("Digite o saldo: ");

17. scanf("%f", &saldo);

18.

19. //solicitação do débito

20. printf("Digite o debito: ");

21. scanf("%f", &debito);

22.

23. //solicitação do crédito

24. printf("Digite o credito: ");

25. scanf("%f", &credito);

26.

27. //fórmula da conta que resultará no saldo atual

28. saldoAtual = saldo - debito + credito;

29.

30. //saídas que mostrarão os saldos inseridos nas variáveis "conta" e "saldoAtual"

31. printf("Conta: %d\n", conta);

32. printf("Saldo atual: %.2f\n", saldoAtual);

33.

34. //logicazinha de if/else onde se o saldo for maior q 0 = positivo, e menor q 0 = negativo

35. if (saldoAtual >= 0)

36. printf("Saldo Positivo!!\n");

37. else

38. printf("Saldo Negativo!!\n");

39.

40. return 0;

41. }