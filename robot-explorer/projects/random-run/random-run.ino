//adiciona a biblioteca de controle dos motores ao codigo
#include <RoboCore_Vespa.h>

//configura o objeto "motores" a partir da biblioteca
VespaMotors motores;

//declaracao da variavel que armazena o intervalo entre acoes dos motores
const int INTERVALO = 1000;

void setup() {
  //nao ha nada para ser configurado no codigo
}

void loop() { //acoes que serao executadas infinitamente

  //aciona os dois motores para frente com velocidade maxima
  motores.forward(100);
  delay(INTERVALO); //mantem os motores girando pelo tempo determinado
  motores.stop(); //para os motores para a nova acao

  //aciona o motor da esquerda com 90% da velocidade maxima e o motor da direita com 30%,
  //girando o robo para a direita
  motores.turn(90,30);
  delay(INTERVALO); //mantem os motores girando pelo tempo determinado
  motores.stop(); //para os motores para a nova acao
  
  //aciona o motor da esquerda com 30% da velocidade maxima e o motor da direita com 90%,
  //girando o robo para a esquerda
  motores.turn(30,90);
  delay(INTERVALO); //mantem os motores girando pelo tempo determinado
  motores.stop(); //para os motores para a nova acao

  //aciona os dois motores para tras com velocidade maxima
  motores.backward(100);
  delay(INTERVALO); //mantem os motores girando pelo tempo determinado
  motores.stop(); //para os motores para a nova acao

  //aciona o motor da esquerda com 30% da velocidade maxima e o motor da direita com 90%,
  //girando o robo para a esquerda
  motores.turn(30,90);
  delay(INTERVALO); //mantem os motores girando pelo tempo determinado
  motores.stop(); //para os motores para a nova acao;

  //aciona o motor da esquerda com 90% da velocidade maxima e o motor da direita com 30%,
  //girando o robo para a direita
  motores.turn(90,30);
  delay(INTERVALO); //mantem os motores girando pelo tempo determinado
  motores.stop(); //para os motores para a nova acao

}
