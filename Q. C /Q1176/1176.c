#include <stdio.h>
#include<stdlib.h>

long long fib(int numero){
    long long a,b,fib;
    a = 0;
    b = 1;
    
    for(;numero>1;numero--){
    fib = a + b;
    a = b;
    b = fib;}
    
    return fib;
}


int main(){
    int c, vezes;
    long long fibo;
    scanf("%d", &vezes);

    for(;vezes>0;vezes--){
        scanf("%d", &c);
    
    if(c==0)
        printf("Fib(0) = 0\n");
    if(c==1 || c==2)
        printf("Fib(%d) = 1\n",c);
    if(c>2){
        fibo = fib(c);
        printf("Fib(%d) = %lld\n", c, fibo);}
    }

    
    return 0;
}
