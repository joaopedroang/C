
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    int idades[3];
    for(int i=0;i<3;i++) {
        printf ("Insira sua idade: ");
        scanf ("%d", &idades[i]);
    }
    
    for(int i=0;i<3;i++) {
        printf ("%d\n", idades[i]);
    }
    return 0;
}
