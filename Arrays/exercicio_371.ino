//  c++ code 
/* 37- Faça um programa que contenha um array tamanho 10. Solicite ao usuário que
digite números pares, inteiros, e os guarde no vetor. Para isso utilize a estrutura de
repetição WHILE. Ao final, exiba todos os valores com a estrutura de repetição FOR.
*/

int numerosPares[10];

void setup()
{
  Serial.begin(9600);
  
   int numero = 0;
  
  Serial.println("DIGITE 10 NUMEROS PARES");
  Serial.println();

  for (int i = 0; i < 10; i++) {
    Serial.println("Digite o " + String(i + 1) + " numero");

   

    // Espera o usuário digitar
    while (!Serial.available());

    numero = Serial.parseFloat(); 
    if (int(numero) % 2 == 0) {
      numerosPares[i] = numero;
    } else {
      Serial.println("Numero impar sera salvo como zero");
      numerosPares[i] = 0;
    }
  }

  Serial.println();
  Serial.println("NUMEROS DIGITADOS");

  for (int i = 0; i < 10; i++) {
    Serial.println("Numero " + String(i + 1) + ": " + String(numerosPares[i]));
  }
}

void loop()
{
  
}
