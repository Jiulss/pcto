#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  int b;
  int c;

  printf("vuoi risolvere l'equazione ax2+bx+c? allora inserisci i seguenti valori:\n");
  printf("a\n");
  scanf("%d", &a);
  printf("b\n");
  scanf("%d", &b);
  printf("c\n");
  scanf("%d", &c);
  printf("%dx^2 + %dx + %d = 0\n", a, b, c);
  printf("bene, il tuo delta è uguale a %d\n", (b*b)-(4*a*c));
if ((b*b)-(4*a*c)<0)
{
  printf("l'equazione è impossibile\n");
}
else if ((b*b)-(4*a*c)==0)
{
  printf("le due soluzioni coincidono");
}
else if ((b*b)-(4*a*c)>0)
{
printf("le tue due soluzioni sono" );
}
  }