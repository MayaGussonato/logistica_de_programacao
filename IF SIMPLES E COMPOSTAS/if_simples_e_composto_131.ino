/*
Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
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
    Serial.println("O numero e par: " + String(numero));
  }

  Serial.println();
  delay(3000);
}
