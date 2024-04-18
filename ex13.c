#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;

  printf("Inserisci tre numeri se vuoi scoprire se possono essere i lati di un triangolo XOXO\n");
  scanf(" %d %d %d", &a, &b, &c);
  if (a+b<c || a+c<b || b+c<a) 
  {printf("non sei capace neanche a costruire un poligono di tre lati oi\n");
  }
  else if (b!=c && c!=a && a!=b) 
  {printf("hai costruito un triangolo scaleno\n");
  }
  else if ((b==a && a!=c) || (a==c && c!=b) || (b==c && c!=a) ) 
  {printf("hai costruito un triangolo isoscele\n");
  }
  else if (a==b && b==c && c==a)
{
  printf("hai costruito un triangolo equilatero");
}
  }