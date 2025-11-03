
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    float preco[5], total=0, media;
    int prod1=0, prod2=0, prod3=0;
    
    for(int i=0;i<5;i++){
        printf("Insira o preço de um produto: ");
        scanf("%f", &preco[i]);
        
        total=total+preco[i];
        
        if(preco[i]<50){
            prod1++;
        } else if(preco[i]>= 50 && preco[i]<80){
            prod2++;
        } else {
            prod3++;
        }
    }
    
    media=total/5;
    
    printf("Quantidade de produtos menor que R$50,00: %d\n", prod1);
    printf("Quantidade de produtos entre R$50,00 e R$80,00: %d\n", prod2);
    printf("Quantidade de produtos maior que R$80,00: %d\n", prod3);
    printf("Média de preço dos produtos: %.2f", media);
    
    return 0;
}
