#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tabC[3]={1234,1356,1245};
    char code[8];
    int a=0;
    int cpt = 1;
    printf( "Enter votre code : " );
    scanf( "%[^\n]", code );

    bool cbon = true;
    size_t length = strlen( code );
    for( int i=0; i<length; i++ ) {
        if ( ! isdigit( code[i] ) ) {
            cbon = false;
        }
    }

    if ( cbon ) { 
        while(atoi(code)!= tabC[a])
        {
            if(a <3)
            {
                a++;
                
            }
            else
            {
                if (cpt == 1)
                {
                
                    printf("Veuillez reessayer il vous reste 2 essais : \n");
                    scanf("%s",code);
                }
                else if (cpt == 2)
                {
                    printf("il vous reste un essai: ");
                    scanf("%s",code);
                }
                else
                {
                    printf("Fin des tentatives\n");
                    printf("compte bloqué");
                    return 0;
                }  
                
                cpt++;
                
            }
        }
        
    } else {
        printf("la saisie n'est pas un nombre");
        return 0;
    }
    printf("code correct\n");
    return 0;
}
  
