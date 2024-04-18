#include <stdio.h>

int main()
{
  int numero;
  int allunaggio = 1969;

  printf("inserire data di nascita prego\n");
  scanf(" %d", &numero);
  if (numero==allunaggio) 
  {
    printf("sei nato l'anno dell'allunaggio!\n");
  }
  else if (numero<allunaggio)
  {
    printf("sei nato %d anni prima dell'allunaggio", allunaggio-numero);
  }
  else if (numero>allunaggio)
  {
    printf("sei nato %d anni dopo l'allunaggio", numero-allunaggio);
  }
  }