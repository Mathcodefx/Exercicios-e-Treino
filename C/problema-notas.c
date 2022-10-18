//Problema "notas" 
//Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de 
//uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no 
//ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a 
//mensagem "REPROVADO", conforme exemplos. 

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

float semestre1, semestre2, resultado;

printf("Digite a primeira nota: ");
scanf("%f", &semestre1);

printf("Digite a segunda nota: ");
scanf("%f", &semestre2);

resultado=semestre1+semestre2;

printf("Resultado final: %.1f\n", resultado);

if (resultado <60)
    printf("Reprovado");    
else
    printf("Aprovado");



    return 0;
}
