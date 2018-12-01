#include <stdio.h> 
#include <string.h>
#define KOKO 20

/* pankkiautomaatti */
int main ( void ) {

	FILE *inp;
	char *inName[KOKO]; //"123.tili"
	int pin_koodi; 
	char tarkistusPin[100];

	
	printf("\nKirjoita tilinumero >"); //"123.tili"
 	scanf("%s",inName);
 	strcat(inName,".tili");

 	inp=fopen(inName, "r"); // avaa 123.tili lukemista varten


 	fgets(tarkistusPin, 100, inp);
 		printf("%s\n", tarkistusPin);








	return 0;

}


// printf("\nKirjoita pin-koodi. \n");
 // scanf("%s",pin_koodi);



