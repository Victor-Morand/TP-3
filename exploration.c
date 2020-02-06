#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


struct Lieu
{
	char nom[10];
	char description[50];
	int dif;
	int tID[5];
};
typedef struct Lieu lieu;

void deplacement (lieu lieu1, lieu lieu2, lieu lieu3, lieu lieu4)
{
	
	char choix[10];
	
	printf("Ou souhaitez vous aller ?");
	scanf("%s" , &choix);
	
	if (strcmp( choix , "plage" )==0)
	{
		printf("%s \n" , lieu3.description);
	}
	
	if (strcmp( choix , "plaine" )==0)
	{
		printf("%s \n" , lieu2.description);
	}
	
	if (strcmp( choix , "montagne" )==0)
	{
		printf("%s \n" , lieu4.description);
	}
	
	if (strcmp( choix , "foret" )==0)
	{
		printf("%s \n" , lieu1.description);
	}
}

int main ()
{	
	

	lieu lieu1 = {"foret", "Une foret luxuriante", 4, {1,2}};
	
	lieu lieu2 = {"plaine", "Une plaine vallonnee", 1, {2,3}};
	
	lieu lieu3 = {"plage", "Une plage de sable blanc et de galets", 2, {3,0}};
	
	lieu lieu4 = {"montagne", "une montagne abrupte", 7, {0,1}};
	
	deplacement(lieu1, lieu2, lieu3, lieu4);
	
	return 0;
}