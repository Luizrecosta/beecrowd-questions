#include <stdio.h>
#include <stdlib.h>


int soma(int x, int y){
    int soma_total;
    soma_total = 0;
    if(x>y){
        for(;y<=x;y++){
        soma_total +=y;
    }
    return soma_total;

    }
    for(;x<=y;x++){
        soma_total +=x;
    }
    return soma_total;
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);

    printf("%d\n",soma(a,b));
    
    return 0;

    
}
