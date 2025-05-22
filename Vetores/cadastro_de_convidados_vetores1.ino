// C++ code
//Variaveis globais 

/*cria um vetor tamanho 4; de 0 a 3
fazendo parte do mesmo cadastro */

String convidados[4]; 
int idadeConvidados[4];// Camel Case
String emailConvidados[4];

void setup()
{
  Serial.begin(9600);
}

void desenhaCabecalho ()
{  
Serial.println( "====================================");
Serial.println( "         CHURRASCO DO SENAS         ");
Serial.println( "====================================");
Serial.println();
Serial.println();
Serial.println ("Seja muito bem vindo(a) fico feliz com sua presenca");
Serial.println();

}

void loop()
{

desenhaCabecalho (); // chama a funcao para desenhar o cabecalho 
  
  // cadstra os dados
  
  for(int i = 0; i < 4; i++)
  {
    // solicitar o nome 
  Serial.println("Informe " +String(i+1)+ "o nome para cadastro");
  while(!Serial.available());
  convidados[i] = Serial.readString();
    
    // solicitar a idade
  Serial.println("Informe a idade de " + convidados[i] + ":");
  while (!Serial.available());
  idadeConvidados[i] = Serial.parseInt();
  
    // solicitar o email
   Serial.println("Informe o email de " + convidados[i] + ":");
   while (!Serial.available());
   emailConvidados[i] = Serial.readString();
   Serial.println();
    Serial.println("Permissao para ir pra festa: " +String(idadeConvidados[i]>=18 ?)"ok" : "Menor de idade"));
        Serial.println(); 

  } // fim do for 
  
  
  //Exibir a lista de convidados
  //obs: so vai na festa quem for maior de >=18
  // pular uma linha

  Serial.println("Exibindo convidados que podem entrar na festa");  
      
  for (int i = 0; i < 4; i++)
  {
    if (idadeConvidados[i] >= 18);
    {
    Serial.println(); // pula uma linha
    
      //nome
      Serial.print("Nome: " + convidados [i]);
      Serial.println();
      
      //idade
     Serial.print("Idade: " + String(idadeConvidados [i]));
     Serial.println();
      
      //email
      Serial.print("Email: " + emailConvidados [i]);
      Serial.println();
    }
  }
  
  
        delay(4000);// pausa 
  
  
}