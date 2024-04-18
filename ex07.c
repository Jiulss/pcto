#include <stdio.h>

int main()
{
  int numero;

  printf("inserisci un numero\n");
  scanf(" %d", &numero);
  if (numero>10) 
  {printf("il numero è maggiore di 10");
  }
  else if (numero<10)
  {printf("il numero è minore di 10");
  }
  else 
  {
    printf("il numero è uguale a 10");
  }
  }