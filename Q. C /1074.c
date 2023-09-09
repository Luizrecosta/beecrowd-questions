#include <stdio.h>
 
int main()
{int n,x,contador;
    scanf("%d",&n);
for(contador =1;contador<=n;contador++){
    scanf("%d", &x);
    if(x%2==0 && x!=0)
        printf("EVEN ");
    if(x%2!=0)
        printf("ODD ");
    if(x<0)
        printf("NEGATIVE\n");
    if(x>0)
        printf("POSITIVE\n");
    if(x==0)
        printf("NULL\n");
}

    return 0;
}
