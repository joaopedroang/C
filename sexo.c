
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    char sexo[3];
    int quantM=0, quantF=0, i;
    
    for(i=0;i<3;i++) {
        printf("Insira seu sexo (M ou F): ");
        scanf(" %c", &sexo[i]);
        if (sexo[i] == 'M') {
            quantM++;
        } else if(sexo[i] == 'F') {
            quantF++;
        }
    }
    
    printf("Haviam %d pessoas do sexo Masculino e %d do sexo Feminino.", quantM, quantF);
    return 0;
}
