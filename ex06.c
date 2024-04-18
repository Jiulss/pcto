#include <stdio.h>

int main()
{
  int numero;
  int numers;

  printf("inserisci due numeri\n");
  scanf(" %d", &numero);
  scanf(" %d", &numers);
  printf("se la somma dei due numeri è %d\n", numero + numers);
  printf("se la differenza dei due numeri è %d\n", numero-numers);
  printf("se il prodotto dei due numeri è %d\n", numero*numers);
  printf("se il quoziente dei due numeri è %d\n", numero/numers);
  printf("allora quali sono i due numeri?\n I due numeri sono %d e %d, ovvero i figli che avranno Livia e Giustini. Baciiii\n", numero ,numers);
  if (numero>numers) 
  {printf("il primo numero è maggiore del secondo");
  }
  else 
  {printf("il secondo numero è maggiore del primo");
  }
  }