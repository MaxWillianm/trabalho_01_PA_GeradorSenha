#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Função para gerar uma senha aleatória
void gerarSenha(char *senha, int tamanho) {
    const char caracteres[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+{}[]<>?";

    int numCaracteres = strlen(caracteres); // le o tamanho do array de caracteres

    for (int i = 0; i < tamanho; i++) {
        int indice = rand() % numCaracteres;
        senha[i] = caracteres[indice];
    }

    senha[tamanho] = '\0'; // Adiciona o caractere nulo para finalizar a string
}

void menuGeraSenha() {
    int tamanho;
    printf("Digite o tamanho da senha desejada: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. A senha deve ter pelo menos 1 caractere.\n");
    }

    char senha[tamanho + 1]; // +1 para o caractere nulo (Caracter nulo é o caracter que para o laço for)

    srand(time(NULL)); // Inicializa a semente para números aleatórios com base no tempo
    gerarSenha(senha, tamanho);

    printf("Senha gerada: %s\n", senha);
}

int main() {
    int menu = 0;
    while (menu != 2) {// Enquanto não digitarmos um número válido
    printf(
    "*********************\n"
    "* Gerador de Senhas *\n"
    "* Senhas Armazenadas*\n"
    "* 1 - Gerar senha   *\n"
    "* 2 - Sair          *\n"
    "* *******************\n");
    scanf("%d", &menu);
    switch (menu){
        case 1:
            menuGeraSenha();
            break;
        case 2:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}
    return 0;
}
