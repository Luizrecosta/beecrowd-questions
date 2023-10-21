#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1)
        return 0; 
    if (num <= 3)
        return 1; 

    if (num % 2 == 0 || num % 3 == 0)
        return 0; 

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0; 
    }

    return 1; // É primo
}

int main() {
    int casos, numero;

    scanf("%d", &casos);

    for (; casos > 0; casos--) {
        scanf("%d", &numero);
        
        if (is_prime(numero))
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    
    return 0;
}
