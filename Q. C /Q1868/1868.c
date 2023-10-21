#include <stdio.h>
#include <stdlib.h>


float desconto(float valor, float produto){
    if(produto==1)
        return valor;
    else if(produto==2)
        return valor*0.95;
    else if(produto==3||produto==4)
        return valor*0.9;
    else if(produto==5||produto==6)
        return valor*0.80;
    else
        return valor*0.70;}

int main(){

    float valores,produtos;
    scanf("%f %f", &valores,&produtos);

    printf("%.2f\n",desconto(valores,produtos));
    
    return 0;

    
}
