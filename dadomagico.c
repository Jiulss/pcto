#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void accapo()
{
  char invio;
  scanf("%c", &invio);
}

void fabbricantedilacrime()
{
  int numero;
  printf("Io sono il tuo Fabbricante di Lacrime, il lupo della favola.\n");
  accapo();
  printf("Inserisci il tuo numero.\n");
  scanf("%d", numero);
  printf("\nIl tuo numero è primo.")
}

void amadeus()
{
  int numero;
  printf("Buonasera Signore e Signori e benvenuti ad affari tuoi!\n")
  accapo();
  printf("Inserisci il numero del tuo pacco");
  scanf("%d", numero);
  printf("\nIl tuo numero non è primo.");
}

void chicamala10()
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

void indovinello(int num, int i)
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

int main()
{
  char nome[40];
  char intent[50];
  int n = rand() % 2147483647 + 1;
  int scelta;
  char risposta[2];

  printf("CHI HA OSATO DISTURBARE IL MIO SONNO ETERNO! MORTALE! DIMMI IL TUO NOME E IL TUO PATRONIMICO!\n");
  scanf("%s", nome);
  printf("%s, perchè sei qui?\n", nome);
  scanf("%s", intent);
  printf("Orsù ebbene perdunque, e sia.\nPrima però dovrai rispondere al mio ineffabile enigma.\n");
  accapo();
  printf("Il numero %d, è primo o no?\n", n);
  accapo();
  printf("Attento mortale, hai poco tempo per rispondere.\n");
  accapo();
  printf("Pssssst avvicinati... io sono il mago Giustini e posso darti una mano. Scegli una di queste tre calcolatrici!\n");
  accapo();
  printf("1: Il Fabbricante di Lacrime\n");
  accapo();
  printf("2: Amadeus\n");
  accapo();
  printf("3: Chicamala010\n");
  scanf("%d", &scelta);
  printf("Hai fatto la tua scelta, speriamo che il fato ti assista");
  if(scelta==1)
  {
    fabbricantedilacrime();
  }
  else if(scelta==2)
  {
    amadeus();
  }
  else if(scelta==3)
  {
    chicamala010();
  }
  accapo();
  printf("\nQuindi mortale, qual è la tua risposta? Il numero è primo?\n");
  scanf("%s", risposta);

  }