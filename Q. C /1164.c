#include <stdio.h>
 
int main() {
  int n,i,j,soma,k;
  soma = 0;
  scanf("%d", &n);
  for(j=0;j<n;j++){
    soma = 0;
    scanf("%d", &i);
    for(k=1;k<i;k++){
        if(i%k==0){
            soma = soma + k;}}
    if(soma==i){
        printf("%d eh perfeito\n",i);
    }
    else{
        printf("%d nao eh perfeito\n",i);
    }}

    return 0;
}
