#include <stdio.h>
 
int main()
{
    int n3,n,n2,contador,i;
    scanf("%d",&n3);


    for(i=1;i<=n3;i++){
    scanf("%d", &n);
    contador = 0;
    for(n2=1;n2<=n;n2++){
        if(n%n2==0){
            contador++;
        }
    }
    if(contador==2 || n==1){
        printf("%d eh primo\n", n);
    }
    else{
        printf("%d nao eh primo\n",n);
    }}

    return 0;
}
