#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int M,N,A,B, multiplosA=0, multiplosB=0, multiplosAB=0,z;
    scanf("%d %d", &M,&N);
    scanf("%d",&A);
    scanf("%d",&B);

    for(;M<=N;M++){
        if(M%A==0)
            multiplosA++; 
        if(M%B==0)
            multiplosB++;
        if(M%B==0 && M%A==0)
            multiplosAB++;
    } 
    z = multiplosA+multiplosB-multiplosAB;
        printf("%d\n", z);
    return 0;
}
