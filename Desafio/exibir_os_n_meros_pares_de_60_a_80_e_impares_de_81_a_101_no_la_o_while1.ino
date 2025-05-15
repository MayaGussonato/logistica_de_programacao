/* EXIBIR OS NÚMEROS PARES DE 60 A 
80 E IMPARES DE 81 A 101 NO LAÇO WHILE */

int numero;

void setup()
{
  Serial.begin(9600);

  // Mostrar os números pares de 60 a 80
  Serial.println("Numeros Pares");
  numero = 60;
  while (numero <= 80)
  {
    Serial.println(numero);
    numero += 2; 
    delay(900);
  }

  // Mostrar os números ímpares de 81 a 101
  Serial.println("Numeros Imparess");
  numero = 81;
  while (numero <= 101)
  {
    Serial.println(numero);
    numero += 2;
    delay(900);
  }
}

void loop()
{
  
}