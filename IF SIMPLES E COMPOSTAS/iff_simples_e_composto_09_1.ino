/* 

Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.

*/

//c++
//variaveis
float Salario;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  // entrada
  Serial.println("Digite seu salario");
  while(!Serial.available());
  Salario = Serial.parseFloat(); // guarda a resposta do usuario


//processamento
 if (Salario < 500){
  Salario = Salario * 1.3;
  Serial.println("Salario reajustado para: R$" + String(Salario));
  
  } else {
  Serial.println(" o funcionario nao tenha direito ao aumento");
 }
}