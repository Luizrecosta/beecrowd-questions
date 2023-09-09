#include <stdio.h>
#include<stdlib.h>

float valorgolpe(int ataque, int defesa,int level, int bonus){
    float golpe;
    golpe = (ataque + defesa)/2.0;
    if(level%2==0)
        golpe = golpe + bonus;
    return golpe;
}


int main(){

    int vezes, bonus, dra,drd,drl;
    int ga,gd,gl, golped, golpeg;
    scanf("%d", &vezes);
    for(;vezes>0;vezes--){
        scanf("%d",&bonus);
        scanf("%d %d %d", &dra,&drd,&drl);
        scanf("%d %d %d", &ga, &gd, &gl);
        golped = valorgolpe(dra,drd,drl,bonus);
        golpeg = valorgolpe(ga,gd,gl,bonus);
        
        if (golped>golpeg){
            printf("Dabriel\n");}
        if (golpeg>golped){
            printf("Guarte\n");}
        if (golped==golpeg){
            printf("Empate\n");}

    }


    
    return 0;
}
