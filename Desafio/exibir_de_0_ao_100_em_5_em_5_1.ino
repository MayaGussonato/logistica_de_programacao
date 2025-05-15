// EXIBIR DE 0 AO 100 EM 5 EM 5 

int numero;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int numero = 0; numero <= 100; numero += 5)
  {
    Serial.println(numero);
    delay(1000); 
  }
}