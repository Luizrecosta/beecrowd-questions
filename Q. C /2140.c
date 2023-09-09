#include <stdio.h>
#include<stdlib.h>




int main(){
int valor,pagamento, troco, contagem_notas;
    
while(1){
    contagem_notas = 0;
    scanf("%d %d", &valor, &pagamento);
    if(valor == 0 && pagamento ==0){
        break;
    }
    troco = pagamento - valor;

    if(troco>=100){
        troco= troco - 100;
        contagem_notas++;}
    if (troco>=50){
        troco = troco - 50;
        contagem_notas++;}
    if (troco>=20){
        troco= troco - 20;
        contagem_notas++;}
    if (troco>=10){
        troco = troco - 10;
        contagem_notas++;}
    if (troco>=5){
        troco = troco - 5;
        contagem_notas++;}
    if (troco>=2){
        troco = troco - 2;
        contagem_notas++;}

    if (contagem_notas == 2)
        printf("possible\n");
    else
        printf("impossible\n");
    


}
   
    
    return 0;
}

