#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    
    scanf("%d", &a);
    scanf("%d", &b);

    if(a==b){
        printf("A e B sao iguais.\n");}


    if(a>b && a%2==0){
      printf("A eh maior e PAR.\n");
    }
    if(a>b && a%2!=0){
      printf("A eh maior e IMPAR.\n");
    }

    if(b>a && b%2==0){
      printf("B eh maior e PAR.\n");
    }
    if(b>a && b%2!=0){
      printf("B eh maior e IMPAR.\n");
    }
    return 0;

    
}
