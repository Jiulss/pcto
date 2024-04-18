#include <stdio.h>

int main()
{
  int numero;
  int numers;
  int numera;

  printf("inserisci tre numeri e scopri se sono una progressione aritmetica\n");
  scanf(" %d", &numero);
  scanf(" %d", &numers);
  scanf("%d", &numera);
  if (numers-numero==numera-numers) 
  {printf("i tre numeri che hai indicato sono una progressione aritmetica ");
  }
  else 
  {printf("i tre numeri che hai indicato non sono considerabili una progressione aritmetica");
  }
  }