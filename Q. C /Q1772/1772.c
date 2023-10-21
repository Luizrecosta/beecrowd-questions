#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int quantidade_alunos, aluno=0;
    float nota1,nota2,nota3,nota4, unidade1,unidade2,media_semestre,maior,menor,media_turma=0;
    scanf("%d", &quantidade_alunos);
    for(;quantidade_alunos>0;quantidade_alunos--){
        scanf("%f %f %f %f", &nota1,&nota2,&nota3,&nota4);
        aluno++;
        maior = nota1>nota2?nota1:nota2;
        menor = nota1<nota2?nota1:nota2;
        unidade1 = (6*maior+4*menor)/10;

        maior = nota3>nota4?nota3:nota4;
        menor = nota3<nota4?nota3:nota4;
        unidade2 = (6*maior+4*menor)/10;

        media_semestre = (unidade1+unidade2)/2;
        media_turma+= media_semestre;

        printf("Discente #%d: %.1f %.1f %.1f\n", aluno,unidade1,unidade2,media_semestre);



    }
    printf("Media da turma: %.2f\n", media_turma/aluno);


    return 0;
}
