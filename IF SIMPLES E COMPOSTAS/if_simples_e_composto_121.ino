/*
Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.
*/

// C++ code
//

void setup() {
  Serial.begin(9600);
}

void loop() {
  int numero = 0;

  Serial.println("Digite um numero:");
  while (!Serial.available());
  numero = Serial.parseInt();

  if (numero % 2 == 0) {
    Serial.println("O numero e par.");
  } else {
    Serial.println("O numero e impar.");
  }

  Serial.println();
  delay(3000);
}
