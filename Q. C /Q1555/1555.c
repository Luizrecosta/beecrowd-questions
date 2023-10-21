#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int Rafael(int x, int y){

    return pow(3*x, 2) + pow(y,2);

}

int beto(int x, int y){
    return 2*pow(x,2) + pow(5*y,2);
    
}

int carlos(int x, int y){
    return -100*x + pow(y,3);
    
}

int main(){
    int vezes, vrafael, vbeto, vcarlos,x,y;
    scanf("%d", &vezes);
    for(;vezes!=0;vezes--){
        scanf("%d %d", &x, &y);

        vrafael = Rafael(x,y);
        vbeto = beto(x,y);
        vcarlos = carlos(x,y);

    if(vrafael>vbeto && vrafael>vcarlos){
        printf("Rafael ganhou\n");}
    else if(vbeto>vrafael && vbeto>vcarlos){
        printf("Beto ganhou\n");}
    else if(vcarlos>vbeto && vcarlos>vrafael){
        printf("Carlos ganhou\n");
    }
    

    }
    return 0;
}
