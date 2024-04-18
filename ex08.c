#include <stdio.h>

int main()
{
  int numero;
  int numers;
  int numerello;

printf("a quanti anni si può prendere la patente completa nel tuo stato?");
scanf("%d", &numero);
printf("a quanti anni si può prendere il patentino nel tuo paese?");
scanf("%d", &numers);
printf("quanti anni hai tu?");
scanf("%d", &numerello);
if (numerello<numers) 
{
    printf("tesoro mai sei scemo? pensi davvero di poter guidare a questa età? hai letteralmente appena iniziato a camminare\n");
}
else if (numerello==numers || (numerello>numers && numerello<numero))
{ 
    printf("puoi prendere il patentino\n");
}
else if (numerello==numero)
{
    printf("puoi prendere la patente\n");
}
else if (numerello>numero && numerello<=80)
{
printf("beh non sono un genio ma mi sa che se a questa età non hai ancora la patente dovresti darti una mossa\n");
}
else if (numerello>80 && numerello<100)
{
    printf("non pensi che sia il momento di smetterla di guidare e magari farsi accompagnare da qualcuno? dai che lo sai pure tu che non ci vedi una mazza e guidi come un bradipo\n");
}
else if (numerello>100 || numerello==100)
{
    printf("lo sai anche tu che questa non è la tua vera età, smettila di comportarti come se avessi due anni per favore");
}
  }