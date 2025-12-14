#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças 
    printf("Desafio Jogo de Xadrez\n");

    //Menu interativo
    int opcao;

    printf("Escolha uma peca para mover\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1://movimento do bispo
        int casaBispo = 7;
        int contadorBispo = 0;
        printf("Movimento do Bispo\n");

        while (contadorBispo < casaBispo)
        {
            printf("CimaEsquerda\n");
            contadorBispo++;
        }
        break;
    case 2://movimento da torre
        int casaTorre = 5;
        printf("Movimento da Torre:\n");

        for (int i = 1; i <= casaTorre; i++)
        {
            printf("Direita\n");
        }
        break;
    case 3://movimento da rainha
        int casaRainha = 8;
        int contadorRainha = 0;
        printf("Movimento da Rainha\n");

        do {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha < casaRainha);
        break;
    case 4://movimento do cavalo
        int casasBaixo = 2;
        int casasEsquerda = 1;
        int passo;
        printf("Movimentação do Cavalo\n");
        // Um loop pode representar a movimentação horizontal e outro vertical.
        for (passo = 0; passo < casasBaixo; passo++){
            int contador = 0;
        
            while (contador < 1)
            {
                printf("Baixo\n");
                contador++;
            }
        }
        int contadorEsq = 0;

        while (contadorEsq < casasEsquerda){
            printf("Esquerda\n");
            contadorEsq++;
        }
        break;
    default:
        printf("opcao invalida!");
        break;
    }
    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops

    return 0;
}
