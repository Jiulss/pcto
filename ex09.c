g#include <stdio.h>

int main()
{
  int numero;
  int numers;

  printf("inserisci due numeri\n");
  scanf(" %d", &numero);
  scanf(" %d", &numers);
  if (numero%numers==0) 
  {printf("il primo numero che hai inserito è multiplo del secondo");
  }
  else 
  {printf("il primo numero che hai inserito non è multiplo del secondo");
  }
  }