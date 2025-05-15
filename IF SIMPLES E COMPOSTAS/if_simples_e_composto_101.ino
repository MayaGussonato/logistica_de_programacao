/*

Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro

*/


// C++ code
// Variáveis
float preco = 0;
float percentual = 0;
float ValorDeVenda = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.println("Digite o valor de compra do produto.");
    while (!Serial.available());
    preco = Serial.parseFloat();
  
    Serial.println("Digite em decimal o percentual a ser aplicado sobre o valor.");
    while (!Serial.available());
    percentual = Serial.parseFloat();
  
   Serial.println("Valor: R$" + String(preco));
   Serial.println("Percentual a ser aplicado:" + String(percentual));
  
   if(percentual > 1.50){
   ValorDeVenda = preco * percentual;
   Serial.println("Valor de venda do produto: " + String(ValorDeVenda));
    
   } else { 
     Serial.println("Seu percentual eh menor que 50%, o produto havera uma margem pequena de lucro.");
   }
   Serial.println();
   Serial.println("--------------------------------------------");
  
   delay(3000);
}