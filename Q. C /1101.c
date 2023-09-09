#include <stdio.h>
 
#include <stdio.h>

int main(){
    int numero_maior, numero_menor, i,somador,extra;
    while(1){
    somador = 0;
    scanf("%d %d", &numero_maior, &numero_menor);
 
    if(numero_menor>numero_maior){
    extra = numero_maior>numero_menor? numero_maior : numero_menor;
    numero_menor = numero_maior;
    numero_maior = extra;}




    if(numero_maior<=0 || numero_menor<=0)
        break;
    for(i= numero_menor;i<=numero_maior;i++){
        printf("%d ", i);
        somador = i + somador;}
    
    printf("Sum=%d\n", somador);}

    return 0;
    }
