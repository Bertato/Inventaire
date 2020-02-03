#include <stdio.h>
#include <string.h>

int main(){	


//------------------------------------------------------------------------ PARTIE 1 --------------------------------------------------------------


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
	

	
	
	//------------------------------------------------------------------------ PARTIE 2 --------------------------------------------------------------
	

	
	
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
	
	int argent = 500;
	int decision = 0;
	
	// choisir l'objet que l'on veut acheter 
	printf ("Vous avez %d pieces d'or !\n",argent);
	printf ("Quel objet voulez vous acheter ?\n");
	printf ("(1) pour le bouclier, (2) pour la monture et (3) pour le pikachu !\n");
	scanf ("%d", &decision);
	
	
	if (decision == 1){
		strcpy (obj[0],objMarchant [7]);
		argent = argent - 10;
		printf ("Vous avez achete le bouclier, vous etes maintenant parre pour l'aventure !\n");
		printf ("Il vous reste %d pieces d'or\n", argent);
		printf ("\n");
	}
	
	if (decision == 2){
		strcpy (obj[0],objMarchant [8]);
		argent = argent - 100;
		printf ("Vous avez achete la monture, vous etes maintenant parre pour l'aventure !\n");
		printf ("Il vous reste %d pieces d'or\n", argent);
		printf ("\n");
	}
	
	if (decision == 3){
		
		printf ("Vous n'etes pas assez riche pour vous offrir cette créature, revenez quand vous serait enfin riche\n");
		printf ("\n");
	}
	// trier notre inventaire par ordre alphabétique
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
		
			if ( strcmp (obj[j], obj[j+1])> 0){
				strcpy (retenir,obj[j+1]);
				strcpy (obj[j+1],obj[j]);
				strcpy (obj[j], retenir);
			}	
		}
	}
	// afficher notre inventaire
	for (int k=0; k<10;k++){
		printf ("%s\n",obj[k]);

	}

//------------------------------------------------------------------------ PARTIE 3 --------------------------------------------------------------





	char objAjoute[100];
	int objAjoutePrix;
	
	// definir ce qu'on ajoute dans l'inventaire du marchant
	printf ("Que voulez vous ajouter dans l'inventaire du marchant ?\n");
	scanf("%[^\n]",objAjoute);
	// definir son prix
	printf ("Quel prix vaut-il ?\n");
	scanf("%d",&objAjoutePrix);
	
	
	printf ("\n");
	
	// ajouter à son inventaire (prix et nom)
	
	objMarchantPrix [0] = objAjoutePrix;
	strcpy (objMarchant [0],objAjoute);
	
	
	// trier les objets par ordre de prix
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
	
	// afficher l'inventaire du marchant par ordre de prix
	for (int s=0; s<10;s++){
		printf ("%s\n",objMarchant[s]);

	}
	printf ("\n");
	
    return 0;
}



