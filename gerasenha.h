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
