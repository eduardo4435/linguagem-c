#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    
    int idade = 32;
    double salario = 4560.9;
    char nome[50];
    char sexo;

    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("A funcionara %s, sexo %c, ganha %.2lf e tem %d anos", nome, sexo, salario, idade);

    return 0;
}
