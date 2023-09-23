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

void guardaSenha(char *senhas, char senha) {
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
        strcat(senhas[i], senha[j]);
    }

void mostraSenha(exibeSenha) {
    printf("Senhas geradas: \n");
    for (int i = 0; i < 10; i++) {
        // printf("%s\n", exibeSenha[i]);
        printf("passou");
    }
}



void menuGeraSenha(senhasGeradas) {
    int tamanho;
    printf("Digite o tamanho da senha desejada: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. A senha deve ter pelo menos 1 caractere.\n");
    }

    char senha[tamanho + 1]; // +1 para o caractere nulo (Caracter nulo é o caracter que para o laço for)
    char senhas[9];

    srand(time(NULL)); // Inicializa a semente para números aleatórios com base no tempo
    gerarSenha(senha, tamanho);
    printf("Senha gerada: %s\n", senha);

    guardaSenha(senhas, senha);
    printf("passou aqui 2");

    memcpy(senhasGeradas, senhas, sizeof(senhas));

}

int main() {
    int menu = 0;
    char senhasGeradas[9];
    char exibeSenha[9];
    while (menu != 2) {// Enquanto não digitarmos um número válido
    printf(
    "*********************\n"
    "* Gerador de Senhas *\n"
    "* Senhas Armazenadas*\n"
    "* 1 - Gerar senha   *\n"
    "* 2 - Sair          *\n"
    "* 3 - Mostrar senhas*\n"
    "* *******************\n");
    scanf("%d", &menu);
    switch (menu){
        case 1:
            menuGeraSenha(senhasGeradas);
            break;
        case 2:
            printf("Saindo...\n");
            break;
        case 3:
            mostraSenha(exibeSenha);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    memcpy(senhasGeradas, exibeSenha, sizeof(exibeSenha));
}
    printf("%s", senhasGeradas);
    return 0;
}
