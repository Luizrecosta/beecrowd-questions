#include <stdio.h>
#include <stdlib.h>

long long int fatorial(long long int  x){
    long long int  m = x;
    long long int soma = 1;
    for(;m>0;m--){
        soma = soma*m;

    }
    return soma;

}


int main(){
    long long int x,y;
    long long int  soma_fatorial;
    
    while(scanf("%lld %lld",&x,&y)!= EOF){

        if(x<0)
            x=-1*x;
        if(y<0)
            y=-1*y;

    soma_fatorial= fatorial(x) + fatorial(y);

    printf("%lld\n", soma_fatorial);}

    return 0;
}
