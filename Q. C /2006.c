#include <stdio.h>
#include<stdlib.h>



int main(){
    int cha, i,v1,v2,v3,v4,v5;
    scanf("%d", &cha);
    scanf("%d %d %d %d %d", &v1,&v2,&v3,&v4,&v5);
    i = 0;
    if(v1==cha)
        i++ ;
    if(v2==cha)
        i++ ;
    if(v3==cha)
        i++ ;
    if(v4==cha)
        i++ ;
    if(v5==cha)
        i++ ;
    
    printf("%d\n", i);


    
    return 0;
}
