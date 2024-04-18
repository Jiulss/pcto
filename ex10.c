#include <stdio.h>

int main()
{
  float numero;

  printf("Convertitore di gradi celsius. Inserire.\n");
  scanf(" %f°", &numero);
  if (numero< -273.15) 
  {printf("la temperatura inserita non esiste\n");
  }
  else 
{printf("la tua temperatura in kelvin è %f K, mentre in fahreneit è uguale a %f °F", numero+273.15, 9/5*numero + 32);
}
  }