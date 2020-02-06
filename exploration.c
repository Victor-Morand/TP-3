#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (){
	
	int choixDestination;
	
	printf ("Saisissez 1 pour aller a Wuhan, 2 pour la Coree du Nord. \n");
	scanf ("%d" , &choixDestination);
	
	if ( choixDestination == 1 ){
		printf ("Vous avez attrape le coronavirus, bonnes vacances a vous \n");
	}
	
	if ( choixDestination == 2 ){
		printf ("Vous etes bien arrive en Coree du Nord, profitez bien de la dictature. \n");
	}
	
	return 0;
}