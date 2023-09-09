#include <stdio.h>
int main(){


char caractere;
int numero_de_testes, nanimais, total_animais, total_coelho, total_rato, total_sapos; 
float total_animais_float;


total_coelho=0;
total_rato=0;
total_sapos=0;


scanf("%d", &numero_de_testes); 

for(total_animais=0; numero_de_testes>0; numero_de_testes--){ 
    scanf("%d %c", &nanimais, &caractere); 
    total_animais = total_animais + nanimais; 
    if(caractere=='R'){ 
        total_rato = nanimais + total_rato;}
    else if(caractere=='S'){
    total_sapos = nanimais + total_sapos;
    } else if(caractere=='C'){
    total_coelho = nanimais + total_coelho;
    }}



    total_animais_float = total_animais; 
    printf("Total: %d cobaias\n", total_animais); 
    printf("Total de coelhos: %d\n", total_coelho); 
    printf("Total de ratos: %d\n", total_rato);
    printf("Total de sapos: %d\n", total_sapos); 
    printf("Percentual de coelhos: %.2f %%\n", (total_coelho*100/total_animais_float));
    printf("Percentual de ratos: %.2f %%\n", (total_rato*100/total_animais_float));
    printf("Percentual de sapos: %.2f %%\n", (total_sapos*100/total_animais_float)); 
       return 0;
}
