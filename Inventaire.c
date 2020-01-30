#include <stdio.h>
#include <string.h>

retenir = 0;

int main()
{	
	char obj1[] = "epee", obj2[] = "potion", obj3[] = "arc";
    int trier;
	int i = 0;
    
	for (i=0;i>3;i++){
		
		
		trier = strcmp(obj1, obj2);
		printf("strcmp(obj1, obj2) = %d\n", trier);
		
		if (strcmp(obj1, obj2) == 1){
			// strcpy permet de copier une chaine de caractere 
			// retenir la premiere la copier dans l'autre et refaire le retenu dans le premier
		
	   
		trier = strcmp(obj1, obj3);
		printf("strcmp(obj1, obj3) = %d\n", trier);

		
		trier = strcmp(obj2, obj3);
		printf("strcmp(obj2, obj3) = %d\n", trier);
	
	}
	
	
    return 0;
}



