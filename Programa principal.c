/*Programa de calculadora*/

#include <stdio.h>

void MOSTRAR_CALCULADORA();

int main() 
{
    float NUM1, NUM2, RES = 0;
    char OPERACAO;
    
    printf("\n\t");
    scanf("%f", &NUM1);

    do 
    {
        MOSTRAR_CALCULADORA();
        scanf(" %c", &OPERACAO);
        printf("\n\t");
        
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
                if (NUM2 != 0) // Verifica divisão por zero
                    RES = NUM1 / NUM2;
                else 
                {
                    printf("Erro: Divisao por zero!\n");
                    continue; // Retorna ao início do loop sem alterar NUM1 e NUM2
                }
                break;
            case '=':
                printf("\n%.2f\n", RES);
                break;
            default:
                printf("Opcao invalida!\n");
                continue; // Retorna ao início do loop sem alterar NUM1 e NUM2
        }
        
        NUM1 = RES;
        NUM2 = 0;
        
    } while (OPERACAO != 's' && OPERACAO != 'S');
    
    return 0;
}

void MOSTRAR_CALCULADORA()
{
    printf("  Digite a operacao:\n");
        printf(" \xDA\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
        printf(" \xB3 + \xB3 - \xB3 * \xB3 / \xB3 = \xB3 (Digite S para sair) \xB3\n");
        printf(" \xC0\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n\t");
}
