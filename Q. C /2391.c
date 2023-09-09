#include <stdio.h>
#include <stdlib.h>
int main(){
    int m=5,indice=1,numerotermo, razao,indiceori=0, primeiro_termo, numero_desejado;
    scanf("%d %d", &primeiro_termo,&razao);
    for(;m>0;m--){
        scanf("%d", &indice);
    indiceori = indice + indiceori;

    numero_desejado = primeiro_termo + (indice)*razao;
    primeiro_termo = numero_desejado;
    

        printf("Termo #%d: %d\n", indiceori+1,numero_desejado);
    }
}
