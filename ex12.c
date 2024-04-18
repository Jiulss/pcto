#include <stdio.h>

int main()
{
  int numero;

  printf("inserire data di nascita prego\n");
  scanf(" %d", &numero);
  if (numero%4==0 && numero%100!=0) 
  {printf("sei un leprotto bisestile, ma penso che tu lo sapessi già da solo\n");
  }
  else 
  {printf("non sei un leprotto bisestile, ma per aver fatto una domanda così stupida potresti essere un cappellaio ritardato\n");
  }
  }