// C++ code
//A Fortaleza do Dado Sagrado

#include <Servo.h>
// Servo motor da porta
Servo motor;

// Pinos
int pinoServo = 13;
int ledVerde = 7;
int ledVermelho = 10;
int joiasAzuis[3] = {4, 3, 2};

int numeroSagrado;
int acertos = 0;
bool portaAberta = false;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  // Configura LEDs
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  for(int i = 0; i < 3; i++) {
    pinMode(joiasAzuis[i], OUTPUT);
    digitalWrite(joiasAzuis[i], LOW);
  }

  // Configura servo
  motor.attach(pinoServo);
  motor.write(0); // Porta fechada

  Serial.println("Ola Aventureiro Bem vindo ao jogo Just do it");
  Serial.println();
  Serial.println();
  Serial.println("Digite um numero de 1 a 6");
  Serial.println();

  // Sorteia o numero sagrado para o primeiro desafio
  numeroSagrado = random(1, 7);
}

void loop() {
  if (Serial.available() > 0) {
    int palpite = Serial.parseInt();

    if (palpite < 1 || palpite > 6) {
      Serial.println("Numero invalido Guardiao nega sua entrada");
      Serial.println();
      Serial.println("Digite um numero de 1 a 6");
      Serial.println();
      return;
    }

    Serial.print("Seu palpite ");
    Serial.println(palpite);
    Serial.print("Numero sorteado ");
    Serial.println(numeroSagrado);
    Serial.println();

    if (palpite == numeroSagrado) {
      Serial.println("Voce acertou Ganhou uma joia azul");
      piscarLed(ledVerde);
      Serial.println();
      if (acertos < 3) {
        digitalWrite(joiasAzuis[acertos], HIGH);
      }

      acertos++;

      if (acertos == 3 && !portaAberta) {
        Serial.println("As 3 joias foram conquistadas A Porta da Sabedoria se abre");
        abrirPorta();
        portaAberta = true;
      } else if (acertos < 3) {
        Serial.println("Continue ainda ha joias a conquistar");
        Serial.println();
        novoDesafio();
      }
    } else {
      Serial.println("Errou O Guardiao rejeitou");
      piscarLed(ledVermelho);
      novoDesafio();
    }
  }
}

void piscarLed(int led) {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void abrirPorta() {
  for (int angulo = 0; angulo <= 90; angulo++) {
    motor.write(angulo);
    delay(15);
  }
  Serial.println("O guardiao libera sua entrada");
  Serial.println();
}

void novoDesafio() {
  numeroSagrado = random(1, 7);
  Serial.println("Tente novamente adivinhe o numero de 1 a 6");
  Serial.println();
}
