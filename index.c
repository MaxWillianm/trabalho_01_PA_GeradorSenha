#include <stdio.h>
#include <string.h>
#include <time.h>

// Função para codificar os valores
void codificar(char *senha, int deslocamento) {
    int tamanho = strlen(senha);

    for (int i = 0; i < tamanho; i++) {
        senha[i] = ((senha[i] - '0' + deslocamento) % 10) + '0';
    }
}

int main() {
    int codigo_maq = 0;
    int senha = 0;
    int desloc = 7;
    time_t currentTime;
    struct tm *localTime;

    // Receba o código da máquina
    printf("Digite o código da maquina: ");
    scanf("%s", codigo_maq);

    currentTime = time(NULL);
    localTime = localtime(&currentTime);

    printf("Hora atual: %d:%02d:%02d\n", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
    printf("Data atual: %d/%02d/%02d\n", localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);



    // Codifique os valores e construa a senha
    codificar(senha, desloc);



    // Exiba a senha resultante
    // printf("A senha codificada e: %s\n", senha);

    return 0;
}
