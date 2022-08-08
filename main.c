#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
	float n1,n2,n3,n4, n11,n22,n33,n44,sm,sf,sa,sp,moyg;
	char nom[50];
	int scoeff;
	printf("entrer votre nom svp \n");
	scanf("%s",nom);
	
	
	

	printf("Entrez la 1ere note en math \n: ");
	scanf("%f",&n1);
	printf("Entrez la 2eme note en math \n : ");
	scanf("%f",&n11);
	sm = ((n1 + n11)/2) * 4 ;
	printf("moyen * coeffecient =  %.2f\n",sm);
	
	
		printf("Entrez la 1ere note en français :\n ");
	scanf("%f",&n2);
	printf("Entrez la 2eme note en français : ");
	scanf("%f",&n22);
	sf = ((n2 + n22)/2) * 3;
	printf("moyen * coeffecient =  %.2f\n",sf);
	
		printf("Entrez la 1ere note en physique :\n ");
	scanf("%f",&n3);
	printf("Entrez la 2eme note en physique \n: ");
	scanf("%f",&n33);
	sp = ((n3 + n33)/2) * 2;
	printf("moyen * coeffecient =  %.2f\n",sp);
	
	
		printf("Entrez la 1ere note en anglais :\n");
		scanf("%f",&n4);
	printf("Entrez la 2eme note en anglais :\n ");
	scanf("%f",&n44);
	sa = ((n4 + n44)/2) * 2;
	printf("moyen * coeffecient =  %.2f\n",sa);
	
	scoeff = (4 + 3 + 2 + 2);
	moyg=(sm + sf + sp + sa) / scoeff;
printf("%s\n",nom);
	printf(" %s ta moyenne est  %f :\n",nom,moyg);


    if (moyg < 10)
	{
		printf("medicre\n");
    }	 
     else if (moyg == 10)
    {
    	printf("passable\n");
    }
	
	else if(moyg >= 10 && moyg <= 12)
	{
		printf("Passable\n");
		
    } 
	else if (moyg > 12 && moyg <= 14)
	{
		printf("assez bien");
	}
	else if ( moyg > 14 && moyg < 17)
	{
 printf("trés bien");
	}
	
    else
    {
		printf("exellent\n");
    }

  
} 


