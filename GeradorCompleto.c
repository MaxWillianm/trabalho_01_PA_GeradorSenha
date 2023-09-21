#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Função para gerar uma senha aleatória
void gerarSenha(char *senha, int tamanho) {
    const char caracteres[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+{}[]<>?";

    int numCaracteres = strlen(caracteres);

    for (int i = 0; i < tamanho; i++) {
        int indice = rand() % numCaracteres;
        senha[i] = caracteres[indice];
    }

    senha[tamanho] = '\0'; // Adiciona o caractere nulo para finalizar a string
}

int main() {
    int tamanho;
    printf("Digite o tamanho da senha desejada: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. A senha deve ter pelo menos 1 caractere.\n");
        return 1;
    }

    char senha[tamanho + 1]; // +1 para o caractere nulo

    srand(time(NULL)); // Inicializa a semente para números aleatórios com base no tempo

    gerarSenha(senha, tamanho);

    printf("Senha gerada: %s\n", senha);

    return 0;
}
