#include <stdio.h>

int main() {

    // codificador
    signed int codVerificador;
    int numeros,n,hora,dia,mes,senha,mudaValorHora,mudaValorDia,mudaValorMes;
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
    printf("\n");


  hora = valores[0];
  dia = valores[1];
  mes = valores[2];
  
  printf("\n %d \n %d \n %d",hora,dia,mes);

  mudaValorHora = hora * 5;
  mudaValorDia = dia * 6;
  mudaValorMes = mes * 7;

return 0;
} 


  //printf("%d \n %d \n %d \n",mudaValorHora,mudaValorDia,mudaValorMes);
  
  

  // função codigo verificador
  
  /*senha = (mudaValorHora*4 + mudaValorDia*3 + mudaValorMes*2)%4;

  if (senha == 0 || senha == 1)
  {
    printf("A senha gerada foi: %d%d%d-%d",mudaValorHora,mudaValorDia,mudaValorMes,senha);
  }
  else{
    codVerificador = 4 - senha;
   printf("A senha gerada foi: %d%d%d-%d",mudaValorHora,mudaValorDia,mudaValorMes,codVerificador);
  }
  

  */
  

  