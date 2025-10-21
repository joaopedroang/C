
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    int numero, quantidade=0;
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if(numero == 13) {
            quantidade++;
        }
    } while (numero != 0);
    
    printf("O número 13 foi digitado %d vezes.", quantidade);
    
    return 0;
}
