/*Programa de calculadora*/

#include<stdio.h>

int main()
{
    float NUM1, NUM2, RES = 0;
    char OPERACAO;
    printf("\n");
    scanf("%f", &NUM1);
    
    do
    {
        printf("\n Digite a operacao (Digite S para sair) : ");
        scanf(" %c", &OPERACAO);
        printf("\n");
        if (OPERACAO == 's' || OPERACAO == 'S')
        {
            printf("\nSaindo do programa...\n\n");
            break;
        }
        
        scanf("%f", &NUM2);
        
        switch (OPERACAO)
        {
            case '+':
                RES = NUM1 + NUM2;
                break;
            case '-':
                RES = NUM1 - NUM2;
                break;
            case '*':
                RES = NUM1 * NUM2;
                break;
            case '/':
                RES = NUM1 / NUM2;
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
        
        printf("\n%.2f\n", RES);
        NUM1 = RES;
        NUM2 = 0;
        
    } while (OPERACAO != 's' && OPERACAO != 'S');
    
    return 0;
}
