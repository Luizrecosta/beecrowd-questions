#include <stdio.h>
#include<stdlib.h>

int chamadas = 0;

int fib(int numero){
    chamadas++;
    if(numero == 0){
        
        return numero;}
    if(numero == 1){
        
        return numero;}
    if(numero>1){
        
        return fib(numero-1) + fib(numero-2);}
   
    }


int main(){
    int c, vezes;
    int fibo;
    scanf("%d", &vezes);

    for(;vezes>0;vezes--){
        chamadas = 0;
        scanf("%d", &c);
    
        fibo = fib(c);
   
        printf("fib(%d) = %d calls = %d\n", c,chamadas-1,fibo);
    }

    
    return 0;
}
