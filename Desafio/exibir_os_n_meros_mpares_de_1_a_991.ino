// EXIBIR OS NÚMEROS ÍMPARES DE 1 A 99

int numero;
  
void setup()
{
 Serial.begin(9600);
  
  for (int numero = 1; numero <= 99; numero += 2)
  {
    Serial.println(numero);
    delay(500);
  }
  
}

void loop()
{
}


