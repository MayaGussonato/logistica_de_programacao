/*
Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/

// C++ code
//

void setup() {
  Serial.begin(9600);
}

void loop() {
  int numero1 = 0;
  int numero2 = 0;

  Serial.println("Digite o primeiro numero:");
  while (!Serial.available());
  numero1 = Serial.parseInt();

  Serial.println("Digite o segundo numero:");
  while (!Serial.available());
  numero2 = Serial.parseInt();

  if (numero1 > numero2) {
    Serial.println("O maior numero e: " + String(numero1));
  } else if (numero2 > numero1) {
    Serial.println("O maior numero e: " + String(numero2));
  } else {
    Serial.println("Os dois numeros sao iguais.");
  }

  Serial.println();
  delay(3000);
}
