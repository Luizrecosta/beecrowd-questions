#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){

    int i, acumulador;

    acumulador = 0;

    for(i=x;i<=y;i++){
        if(i%13!=0){
        acumulador = i + acumulador;}

    }
    return acumulador;
}

int main(){
    int x,y,z;
    
    scanf("%d", &x);
    scanf("%d", &y);

    if(x>y){
        z = x ;
        x = y ;
        y = z;
    }

    z = soma(x,y);

    printf("%d\n",z);
    return 0;
}
