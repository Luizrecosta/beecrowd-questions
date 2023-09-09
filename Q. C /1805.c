#include <stdio.h>
int main(){
    long long maior, menor, soma;
    soma = 0;
    scanf("%lld %lld", &menor,&maior);
    
    soma =  (maior*(maior +1)-(menor*(menor - 1)))/2;
    
    printf("%lld\n",soma);
       return 0;
}
