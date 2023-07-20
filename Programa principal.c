/*Programa de calculadora*/

#include <stdio.h>
#include <windows.h> // biblioteca windows.h para usar SetConsoleCursorPosition()

#define DISPLAY "\n\xDA\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xBF\n\xB3 7 \xB3 8 \xB3 9 \xB3 / \xB3\n\xC3\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB4\n\xB3 4 \xB3 5 \xB3 6 \xB3 * \xB3\n\xC3\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB4\n\xB3 1 \xB3 2 \xB3 3 \xB3 - \xB3\n\xC3\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB4\n\xB3 C \xB3 0 \xB3 . \xB3 + \xB3 (pressione S para sair)\n\xC3\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xB4\n\xB3               \xB3\n\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9"

void MOSTRAR_DISPLAY();

int main() 
{
    float NUM1, NUM2;
    char OPERACAO;

    do 
    {
        system("cls"); // Limpa a tela antes de exibir o display

        printf(DISPLAY);

        COORD coord; // Estrutura para definir as coordenadas do cursor
        coord.X = 2; // Posição X da coordenada (coluna)
        coord.Y = 10; // Posição Y da coordenada (linha)
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        scanf("%f", &NUM1);

        do 
        {
            system("cls");

            printf(DISPLAY);

            COORD coord;
            coord.X = 2;
            coord.Y = 10;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

            // Limpar o espaço antes de imprimir o número
            printf("%.2f\a", NUM1);

            scanf(" %c", &OPERACAO);

            if (OPERACAO == 's' || OPERACAO == 'S') 
            {
                printf("\n\nSaindo do programa...\n\n");
                break;
            } else if (OPERACAO == 'c' || OPERACAO == 'C')
            {
                NUM1 = 0;
                break;
            }

            scanf("%f", &NUM2);

            system("cls");

            switch (OPERACAO) 
            {
                case '+':
                    NUM1 += NUM2;
                    break;
                case '-':
                    NUM1 -= NUM2;
                    break;
                case '*':
                    NUM1 *= NUM2;
                    break;
                case '/':
                    if (NUM2 != 0) // Verifica divisão por zero
                        NUM1 /= NUM2;
                    else 
                    {
                        printf("Erro: Divisao por zero!\n");
                        continue; // Retorna ao início do loop sem alterar NUM1 e NUM2
                    }
                    break;
                default:
                    printf("Opcao invalida!\n");
                    continue; // Retorna ao início do loop sem alterar NUM1 e NUM2
            }

        } while (OPERACAO != 's' && OPERACAO != 'S');

    } while (OPERACAO == 'c' || OPERACAO == 'C');

    getch();
    return 0;
}






