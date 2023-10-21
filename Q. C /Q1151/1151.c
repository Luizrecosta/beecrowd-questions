#include <stdio.h>
int main(){
    int numeros_fib, a,b,fib;
    scanf("%d", &numeros_fib);
    b = 0;
    fib = 0;
    printf("%d", fib);

    for(a=1;numeros_fib>1;numeros_fib--){
        b = a;
        a = fib;
        fib = a + b;
        printf(" %d", fib);
        }
    printf("\n");
    return 0;
}
