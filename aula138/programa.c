#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int idade = 20;
    double salario, altura;
    char genero = 'F';
    char nome[50];
 
    salario = 5800.5;
    altura = 1.63;
    strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n", idade); 
    printf("SALARIO = %2lf\n", salario); 
    printf("ALTURA = %2lf\n", altura); 
    printf("GENERO = %c\n", genero); 
    printf("NOME = %s\n", nome); 

    return 0;
}
