/*    
Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/

//variáveis
String nome = "";
String cargo = "";
float salario = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu nome");
  while(! Serial.available());//
  nome = Serial.readString();
  
  Serial.println("Digite seu cargo");
  while(! Serial.available());//
  cargo = Serial.readString();
  
  Serial.println("Digite seu salario");
  while(! Serial.available());
  salario = Serial.parseFloat();
  
  if(salario < 1000 ){
    
   salario = salario * 1.10;
  }
  Serial.println();
  Serial.println("nome: " + nome);
  Serial.println("cargo: " + cargo);
  Serial.println("salario reajustado: " + String(salario));
  Serial.println();
  delay(3000);
}
