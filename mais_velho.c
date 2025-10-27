
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    int idades[3], maior=0;
    int i;
    for(i=0;i<3;i++) {
        printf ("Insira sua idade: ");
        scanf ("%d", &idades[i]);
        if(idades[i]>maior) {
            maior=idades[i];
        }
    }
    
    printf ("%d", maior);
    return 0;
}
