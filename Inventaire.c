#include <stdio.h>
#include <string.h>

int main(){	

	char retenir [100];

	char obj[10][100] = {"epee", "potion", "arc"} ;

	for (int l=0; l<10;l++){
		printf ("%s\n",obj[l]);
	}
    
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
		
			if ( strcmp ( obj[j], obj[j+1])> 0){
				strcpy (retenir,obj[j+1]);
				strcpy (obj[j+1],obj[j]);
				strcpy (obj[j], retenir);
			}	
		}
	}

	
	for (int k=0; k<10;k++){
		printf ("%s\n",obj[k]);
	}
	
	
    return 0;
}



