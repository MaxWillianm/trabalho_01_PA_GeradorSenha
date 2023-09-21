#include <stdio.h>
#include <string.h>
#include <time.h>

// Função para codificar os valores
void codificarSenha(char *senha, int deslocamento) {
    int tamanho = strlen(senha);

    for (int i = 0; i < tamanho; i++) {
        senha[i] = (senha[i] - '0' + deslocamento) + '0';
    }
}

int main() {
    char senha[100];
    int deslocamento;

    printf("Digite a senha numérica: ");
    scanf("%s", senha);

    printf("Digite um valor de deslocamento: ");
    scanf("%d", &deslocamento);

    codificarSenha(senha, deslocamento);

    printf("Senha codificada: %s\n", senha);

    return 0;
}
