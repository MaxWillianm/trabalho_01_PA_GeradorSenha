#include <stdio.h>

int main() {

    //Declaração das  Variaveis
    signed int codVerificador,codVerificador2,tiraprova,tiraprova2; 
    int numeros,n,hora,dia,mes,senha,senha2,mudaValorHora,mudaValorDia,mudaValorMes,tamanhosenha;

    // Declarando um array para armazenar os valores digitados pelo usuario.
    int valores[3];

    printf("Digite a hora, o dia e o mes neste formato 'hh', 'dd', 'mm' \n");

    printf("\n");

    // Usando um loop 'for' para inserir os valores no array
    for (int i = 0; i < 3; i++) {
        printf("Digite o valor #%d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    /*
    // Imprimindo os valores armazenados no array
    printf("Valores armazenados no array:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", valores[i]);
    }
    */
    printf("\n");

// armazenando as posições do array valores em variaveis separadas.
  hora = valores[0]; 
  dia = valores[1];
  mes = valores[2];
  
  printf("\n");

  mudaValorHora = hora * 5;
  mudaValorDia = dia * 6;
  mudaValorMes = mes * 7;

  printf("\n %d \n %d \n %d \n",mudaValorHora,mudaValorDia,mudaValorMes);


  // função codigo verificador 1
  
  senha = ((mudaValorHora*4) + (mudaValorDia*3) + (mudaValorMes*2))%11; // multiplica todos os valores por uma sequencia definida divide por 10 e armazena o resto da divisão.

  tiraprova = ((mudaValorHora*4) + (mudaValorDia*3) + (mudaValorMes*2));
  printf("%d \n ", tiraprova);
  


  if (senha == 0 || senha == 1) // Se o resto da divisão da senha por 1 for 1 ou 0 é atribuido automaticamente o digito verificador 0.
  {
    senha = 0;
    printf("A senha gerada foi: %d%d%d-%d \n",mudaValorHora,mudaValorDia,mudaValorMes,senha);
  }
  else{
    codVerificador = (11 - senha); //A senha possui 11 caracteres então para se obter o primeiro codigo verificador diminiu 11 pelo resto da divisão da senha
   printf("A senha gerada foi: %d%d%d-%d \n",mudaValorHora,mudaValorDia,mudaValorMes,codVerificador);
  }
  
  // função codigo verificador 2
  
  senha2 = ((mudaValorHora*8) + (mudaValorDia*7) + (mudaValorMes*6) + (codVerificador*5))%11; // multiplica todos os valores por uma sequencia definida divide por 11 e armazena o resto da divisão.
  tiraprova2 = ((mudaValorHora*8) + (mudaValorDia*7) + (mudaValorMes*6) + (codVerificador*5));
  printf("%d \n", tiraprova2);


  if (senha2 == 0 || senha2 == 1) // Se o resto da divisão da senha por 11 for 1 ou 0 é atribuido automaticamente o digito verificador 0.
  {
    senha2 = 0;
    printf("A senha gerada foi: %d%d%d-%d%d \n",mudaValorHora,mudaValorDia,mudaValorMes,senha,senha2);
  }
  else{
    codVerificador2 = (11 - senha2); //A senha possui 11 caracteres então para se obter o segundo codigo verificador diminiu 11 pelo resto da divisão da senha2
   printf("A senha gerada foi: %d%d%d-%d%d \n",mudaValorHora,mudaValorDia,mudaValorMes,codVerificador,codVerificador2);
  }
  

return 0;
} 

  