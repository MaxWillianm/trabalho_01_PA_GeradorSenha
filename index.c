#include <stdio.h>
#include "gerasenha.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_SENHAS 100 // Número máximo de senhas a serem armazenadas
#define TAMANHO_SENHA 10 // Tamanho padrão da senha

struct Senhas {
    char senha[TAMANHO_SENHA + 1];
};

int main() {
    int menu = 0;

    struct Senhas senhas[MAX_SENHAS];
    int numSenhas = 0;

    while (menu != 3) {// Enquanto não digitarmos um número válido
    printf(
    "*********************\n"
    "* Gerador de Senhas *\n"
    "* 1 - Gerar senha   *\n"
    "* 2 - Mostrar senhas*\n"
    "* 3 - Sair          *\n"
    "* *******************\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &menu);
    switch (menu){
        case 1:
            if (numSenhas < MAX_SENHAS) {
                gerarSenha(senhas[numSenhas].senha, TAMANHO_SENHA);
                printf("Senha gerada: %s\n", senhas[numSenhas].senha);
                printf("\n");
                printf("\n");
                printf("\n");
                numSenhas++;
            } else {
                printf("Limite de senhas atingido. Impossível gerar mais senhas.\n");
            }
            break;
        case 2:
            printf("Senhas geradas:\n");
            for (int i = 0; i < numSenhas; i++) {
                printf("%d: %s\n", i + 1, senhas[i].senha);
            }
            printf("\n");
            printf("\n");
            printf("\n");
            break;
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}
    return 0;
}
