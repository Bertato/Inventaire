#include <stdio.h>
#include <string.h>

int main(){	

	char retenir [100];
// definir ce qu'on a dans le sac avec un double tableau
	char obj[10][100] = {"epee", "potion", "arc"};

// afficher le sac avant qu'il ne soit trié
	for (int l=0; l<10;l++){
		printf ("%s\n",obj[l]);
	}
	
// trier le sac par ordre alphabétique 
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
		
			if ( strcmp (obj[j], obj[j+1])> 0){
				strcpy (retenir,obj[j+1]);
				strcpy (obj[j+1],obj[j]);
				strcpy (obj[j], retenir);
			}	
		}
	}
	printf ("Le sac est en cours de tri par ordre alphabetique\n");
	
// afficher le sac après le tri
	for (int k=0; k<10;k++){
		printf ("%s\n",obj[k]);

	}
	
	printf ("Le marchant a des objets pour vous, regardons cela\n");
	printf ("\n");
	
// définir les objets du marchant 
	char retenirMarchant [100];
	int retenirMarchantPrix ;
	
	char objMarchant [10][100] = {"monture","pikachu","bouclier"};
	int objMarchantPrix [10] = {100,1000,10};
	
// afficher les objets du marchant avant qu'il ne soit trié
	for (int m=0; m<10;m++){
		printf ("%s\n",objMarchant[m]);
	}
	
	printf ("Oh la, attendez je vais vous classer ca par ordre de prix, ce sera plus pratique\n");

// trier les objets du marchant par prix
	for (int n=0;n<10;n++){
		for (int o=0;o<10;o++){
		
			if (objMarchantPrix [o] > objMarchantPrix[o+1]){
				
				retenirMarchantPrix = objMarchantPrix [o+1];
				strcpy (retenirMarchant,objMarchant[o+1]);
				
				objMarchantPrix[o+1] = objMarchantPrix[o];
				strcpy (objMarchant[o+1],objMarchant[o]);
				
				objMarchantPrix [o] = retenirMarchantPrix;
				strcpy (objMarchant[o], retenirMarchant);
			}	
		}
	}

// afficher l'inventaire du marchant après le tri
	for (int p=0; p<10;p++){
		printf ("%s\n",objMarchant[p]);

	}
	printf ("\n");
    return 0;
}



