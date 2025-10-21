
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    char sexo;
    int contaH=0, contaM=0;
    
    for (int i=1; i<=20; i++) {
        printf("Digite seu sexo (M ou F): ");
        scanf(" %c", &sexo);
        if(sexo == 'F') {
            contaM++;
        } else if(sexo == 'M') {
            contaH++;
        }
    }
    
    printf("Quantidade de Homens: %d", contaH);
    printf("\nQuantidade de Mulheres: %d", contaM);
    
    return 0;
}
