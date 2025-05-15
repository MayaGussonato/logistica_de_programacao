float numero3 = 0;
float soma;
int escolhaDaOperacao;
int contador = 0;
float subtracao = 0;
float resultado = 0;
float somar (float numero1, float numero2, float numero3 = 0){
  //variavel local
  //numero3//parametro da funcao somar
    return (numero1 + numero2 + numero3);
}


float subtrair(float numero1, float numero2){
return (numero1 - numero2);
}

float multiplicacao(float numero1, float numero2){
  return (numero1 * numero2);
}

float divisao(float numero1, float numero2){
  return (numero1 / numero2);
}


void setup()
{
 Serial.begin(9600);
 float numero1 = 0.0;
float numero2 = 0.0;
  
  do{
    Serial.println("Bem-vindo(a) a calculadora mega inteligente ");
    Serial.println("Escolha uma das opcoes/operacoes: ");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtracao");
    Serial.println("3 - Multiplicacao");
    Serial.println("4 - Dividir");
while(!Serial.available()){}
escolhaDaOperacao = Serial.parseInt();

    Serial.println("Agora, para realizar a operacao digite o primeiro numero: ");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero: ");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    switch(escolhaDaOperacao){
    	
    case 1: 
      resultado = somar(numero1,numero2);
     Serial.println("WOW!! O resultado foi: " + String(resultado));
      break;
      
    case 2: 
      resultado = subtrair(numero1,numero2);
     Serial.println("WOW!! O resultado foi: " + String(resultado));
    break;
      
    case 3:
      resultado = multiplicacao(numero1,numero2);
     Serial.println("WOW!! O resultado foi: " + String(resultado));
      break;
      
    case 4:
     resultado = divisao(numero1,numero2);
     Serial.println("WOW!! O resultado foi: " + String(resultado)); 
    break;
      
      default:
      Serial.println("Opcao invalida")
    }
    
   
    Serial.println("Voce deseja continuar? se sim, digite [s], se nao digite [n]");
    while(! Serial.available ()){}
    if(Serial.readString() == "s"){
    contador++;
    }
    else{
    contador = 0;
    Serial.println("Ate breve, obrigado por usar calculadora mega inteligente");
    Serial.println("Caso queira voltar, reinicie o sistema.");
    }
    
  }
  while(contador != 0);
}


  
void loop()
{
  
}