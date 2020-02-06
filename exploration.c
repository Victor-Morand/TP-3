#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (){
	
	char choixDestination[14];
	
	printf ("Voulez vous aller a Wuhan ou en Coree ? \n");
	scanf ("%s" , &choixDestination);
	
	if (strcmp( choixDestination , "Wuhan")==0){
		printf("test1");
	}
	
	if (strcmp( choixDestination , "Coree")==0){
		printf("test2");
	}
	
	return 0;
}