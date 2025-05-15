
int idade = 15;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //caregorias na escolinhas de fitebol
  //infantil abaixo de 10 anos 
  // juvenil abaixo de 18 anos
  //adulta a partir de 18 anos
  
  if(idade <= 10){//negativo ate 10 anos
  	Serial.println("Categoria infantil");
  } else if (idade < 18){//11 ate 17 anos
    Serial.println("Categoria juvenil");
  } else if (idade < 35){//18 ate 34
    Serial.println("Categoria adulta");
  } else {//35 infinito
    Serial.println("Categoria Senior");
  }
  
}
