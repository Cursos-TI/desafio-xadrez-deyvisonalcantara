#include <stdio.h>


// Funções recursivas para Torre, Bispo e Rainha


// TORRE: move-se em linha reta — recursivo
void moverTorre(int casas, int atual)
{
    if (atual > casas)
        return; // condição de parada
    printf("Direita (%d casa)\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

// BISPO: move-se na diagonal — recursivo com loops aninhados
void moverBispo(int casas, int passo)
{
    if (passo > casas)
        return; // condição de parada

    // Loop aninhado: o bispo se move "Cima e Direita" a cada casa
    for (int vertical = 1; vertical <= 1; vertical++)
    {
        for (int horizontal = 1; horizontal <= 1; horizontal++)
        {
            printf("Cima e Direita (%d casa)\n", passo);
        }
    }

    moverBispo(casas, passo + 1); // chamada recursiva
}

// RAINHA: move-se em todas as direções — recursivo
void moverRainha(int casas, int atual)
{
    if (atual > casas)
        return; // condição de parada
    printf("Esquerda (%d casa)\n", atual);
    moverRainha(casas, atual + 1); // chamada recursiva
}


// Cavalo com loops complexos e controle de fluxo
// Movimento: duas casas para cima e uma para a direita

void moverCavaloComplexo()
{
    int movVertical = 2;   // duas casas para cima
    int movHorizontal = 1; // uma casa para a direita

    printf("=== Movimento do Cavalo ===\n");

    // Loop externo controla movimento vertical
    for (int v = 1; v <= movVertical; v++)
    {

        // Se o cavalo atingir a segunda casa para cima, faz movimento horizontal
        if (v == movVertical)
        {
            for (int h = 1; h <= movHorizontal; h++)
            {
                if (h == 0)
                    continue; // Exemplo de uso de continue
                printf("Direita (%d casa)\n", h);
                break; // Sai do loop interno após o movimento da direita
            }
        }

        printf("Cima (%d casa)\n", v);
    }
}


// Função principal

int main()
{
    printf("=== Movimento da Torre ===\n");
    moverTorre(5, 1); // Move 5 casas para a direita
    printf("\n");

    printf("=== Movimento do Bispo ===\n");
    moverBispo(5, 1); // Move 5 casas na diagonal
    printf("\n");

    printf("=== Movimento da Rainha ===\n");
    moverRainha(8, 1); // Move 8 casas para a esquerda
    printf("\n");

    moverCavaloComplexo(); // Movimento em "L" complexo
    printf("\nMovimentos concluídos!\n");

    return 0;
}
