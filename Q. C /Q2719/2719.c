#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        int viagem = 1; 

        int peso = 0;
        for (int i = 0; i < N; i++) {
            int pi;
            scanf("%d", &pi);


            if (peso + pi > M) {
                viagem++;
                peso = pi;
            } else {
                peso += pi;
            }
        }

        printf("%d\n", viagem);
    }

    return 0;
}
