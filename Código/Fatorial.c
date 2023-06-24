#include <stdio.h>

int main()
{
    int i, num, fatorial; // controle do laço, número que se deseja calcular o fatorial, fatorial do número 
    
    printf("Digite um numero : ");
    scanf("%d", &num);
    
    fatorial = 1; // inicializa a variável para dar certo a operação *=
    
    for(i = num; i >= 1; i--){
        if(i == 1){ // se i chegar a 1 imprime o fatorial, e sai do laço for
            printf(" 1 = %d", fatorial);
            break;
        }
        
        printf(" %d x", i); // i vai sendo imprimindo em ordem decrescente
        fatorial *= i; // operação de multiplicar pelo anterior
        
    }
    return 0;
}




