#include <stdio.h>


int main(){

    int numero_de_jogadas, cont1,cont0, jogadas;
    
    while(1){
    cont0 = 0;
    cont1 = 0;
    scanf("%d", &numero_de_jogadas);
    if(numero_de_jogadas==0)
        break;
    
    for( ; numero_de_jogadas>0; numero_de_jogadas--){
        scanf("%d", &jogadas);
        
        if(jogadas==0)
            cont0++;
        else
            cont1++;
        
        
        
    }  
    printf("Mary won %d times and John won %d times\n", cont0,cont1);}
    
    return 0;} 
