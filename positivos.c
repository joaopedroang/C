
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    int numeros[6];
    int i;
    
    for(i=0;i<6;i++) {
        printf("Insira um número: ");
        scanf("%d", &numeros[i]);
    }
    
    for(i=0;i<6;i++) {
        if (numeros[i]>0) {
            printf ("%d\n", numeros[i]);
        }
    }
    return 0;
}
