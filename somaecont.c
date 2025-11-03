
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    float numeros[4], soma = 0;
    int contaNeg=0;
    
    for(int i=0;i<4;i++) {
        printf("Insira um número real: ");
        scanf("%f", &numeros[i]);
        if(numeros[i]<0){
            contaNeg++;
        } else{
            soma = soma + numeros[i];
        }
    }
    
    printf("A soma dos positivos é: %.1f\n", soma);
    printf("Quantidade de números negativos: %d", contaNeg);
    return 0;
}
