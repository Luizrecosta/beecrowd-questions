#include <stdio.h>
 
int main(){
    
    int numero_de_vezes, maior, posicao,a,b;

    b = 0;
    for(numero_de_vezes=1;numero_de_vezes<101;numero_de_vezes++){
        scanf("%d", &a);
        maior = a>b ? a : b;
        if(maior==a){
            posicao = numero_de_vezes;
            b = a;}}
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;}   
