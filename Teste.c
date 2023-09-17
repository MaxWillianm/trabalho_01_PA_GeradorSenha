#include <stdio.h>

int main() {

    // codificador
    int hora, dia, mes, senha, mudaValorHora, mudaValorDia, mudaValorMes;
    int quantidade;

    printf("Digite a quantidade de valores a serem inseridos: ");
    scanf("%d", &quantidade);

    // Declarando um array para armazenar os valores
    int valores[quantidade];

    // Usando um loop 'for' para inserir os valores no array
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor #%d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Imprimindo os valores armazenados no array
    printf("Valores armazenados no array:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", valores[i]);
    }


    hora = valores[0];
    dia = valores[1];
    mes = valores[2];




    mudaValorHora = hora * 5;
    mudaValorDia = dia * 6;
    mudaValorMes = mes * 7;

return 0;
}
