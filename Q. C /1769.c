#include <stdio.h>

int encontraPosicaoFibonacci(int N) {
    int a = 1, b = 1, c = 2, pos = 2;
    
    if(N == 1) 
        return 2;
    if(N == 2)
        return 3;
    
    while (c < N) {
        c = a + b;
        a = b;
        b = c;
        pos++;
    }
    
    if (c == N)
        return pos;
    else
        return -1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int posicao = encontraPosicaoFibonacci(N);
    
    printf("%d\n", posicao);
    
    return 0;
}
