#include <stdio.h>
 
int main()
{
   int t,r1,r2;

   scanf("%d",&t);
   while(t!=0){
    t = t-1;
    scanf("%d %d", &r1,&r2);
    printf("%d\n",r1+r2);
    }
    return 0;
}
