#include <stdio.h>
 
int main(){
    int numero_de_testes, dias, i;
    float quantidade_de_comida;
    scanf("%d", &numero_de_testes);

    for(i=numero_de_testes; i>=1; i--){
    scanf("%f", &quantidade_de_comida);
    for(dias=0;quantidade_de_comida>1;++dias){
        quantidade_de_comida = quantidade_de_comida/2;}
    printf("%d dias\n", dias);}

    return 0;}   
