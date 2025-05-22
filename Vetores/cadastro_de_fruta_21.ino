// Variáveis globais
// vetor de nomes (0 até 5)
// vetor de preços
String frutas[6]; 
float precoFrutas[6];

void setup()
{
  Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO SENAS ***");
  Serial.println();
  
  Serial.println("OH, SENAS BORA CADASTRAR AS FRUTAS!");
  Serial.println();
 
  // Pede as frutas para o usuário
  for(int i = 0; i <= 5; i++) { 
    Serial.println("INFORME A " + String(i + 1) + " FRUTA:");
    while (!Serial.available());
    frutas[i] = Serial.readString();
   
    
    // Pega o valor da fruta
    Serial.println("Qual o preco de " + frutas[i] + "?");
    while(!Serial.available());
    precoFrutas[i] = Serial.parseFloat(); 
  }

  Serial.println();
  Serial.println("=FIM DE CADASTRO=");
  Serial.println();
  Serial.println("FRUTAS CADASTRADAS:");

  // Mostrar as frutas cadastradas com preços
  for(int i = 0; i <= 5; i++) {
    Serial.println(String(i + 1) + " Fruta: " + frutas[i] + " - R$ " + String(precoFrutas[i], 2));
  }
}

void loop()
{
  
}
