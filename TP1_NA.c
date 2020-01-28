#include <stdio.h>

int main () {
	
	 int salAnu; /* salaire Annuel reçu */
	 float sommeAnnu;
	 
	const float PRIME_FIN_ANNEE = 0.025;
	
	float salAetprimeAn;
	float sommeInclu;
	
	  /* nombre d'années en poste */
	 int nbAnn;
	
	 float surPrime; /* Bonis selon le nombre d'années */
	 
	 /* solution avec if et else selon l''anciennetés */ 
	 
	  /* Demande d'information a l'employe''*/ 
	  
	 printf ("votre salaire annuel est de $: \n ");
	 scanf("%d",&salAnu);
	
	 
	  /* calcul salaire annuel + prime annuel */ 
	
	salAetprimeAn= salAnu * PRIME_FIN_ANNEE;
	sommeAnnu = (salAnu + salAetprimeAn);
	printf("voici votre prime annuel est de %.2f $\n",salAetprimeAn);
	printf("voici votre salaire incluant avec prime annuel: %.2f \n\n", sommeAnnu);
	 //scanf("%.2f",&sommeAnnu);

	 

	 
    
     do {
                 printf("Tapez le nombre d'annee d experience (ans) :  "); // Tapper le mois choisi
                 scanf("%d", &nbAnn); 
               } while (nbAnn <= 0 || nbAnn > 100); // mois doit etre entre 1 et 12 sinon - erreur
           
               
                      
                      
                      if (nbAnn == 1 || nbAnn == 2 || nbAnn == 3 || nbAnn == 4) {
                                surPrime = 300.00; // les mois de l'annee avec 31 jour
                                printf("Votre prime est de : 300$ \n"); // il y a 31 jours dans ce mois
               } else if (nbAnn == 5 || nbAnn == 6 || nbAnn == 7 || nbAnn == 8 || nbAnn == 9) {
                      			surPrime = 725.00; // mois de l'annee avec 30 jour 
                     			printf("Votre prime est de : 750$ \n"); // affichage du 30 jour
               } else if (nbAnn <= 10 ||  nbAnn > 100) {
               					surPrime = 1200.00;
                                // execption pour le mois de fevrier 
                                printf("Votre prime est de : 1200$ \n"); // affiche du mois 

	 			sommeInclu = (surPrime + sommeAnnu);
	 			printf("voici votre salaire incluant avec prime annuel: %.2f \n\n", sommeInclu);
	 			

	 	}
	 
	 
	 return 0 ;
	}
	
