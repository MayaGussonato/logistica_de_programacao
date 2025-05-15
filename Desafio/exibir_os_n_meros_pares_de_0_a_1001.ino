// EXIBIR OS NÚMEROS PARES DE 0 A 100

int numero;
  
void setup()
{
 Serial.begin(9600);
  
  for (int numero = 0; numero <= 100; numero += 2)
  {
    Serial.println(numero);
    delay(500);
  }
  
}

void loop()
{
}


