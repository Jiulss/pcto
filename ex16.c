#include <stdio.h>

int main()
{
  int num;
  int i;

printf("inserire numero\n");
scanf("%d", &num);
i=num-1;
while (i>1)
{
  if(num%i==0)
  { 
   printf("non è un numero primo\n");
   return 0;
  }
  i--;
}
    printf("è un numero primo");
}