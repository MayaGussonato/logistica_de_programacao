// Exibir do 5 ao 1 
//
void setup()
{
  Serial.begin(9600);

  for (int numero = 5; numero >= 1; numero--)
  {
    Serial.println(numero);
    delay(900);
  }
}

void loop()
{
  
}
