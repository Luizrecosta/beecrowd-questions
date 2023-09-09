#include <stdio.h>
 
int main()
{
    int idade,soma;
    float media,contador;
    contador=0;
    soma=0;

    do{
    scanf("%d",&idade);
    if(idade>=0){
    soma = soma + idade;
    contador++;}
    }while(idade>=0);

    media = soma/contador;

    printf("%.2f\n",media);

    return 0;
}
