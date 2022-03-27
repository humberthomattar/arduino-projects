## Projetos realizados

### Blink Led

O "blink led" pode ser encarado como o "hello world" do arduíno, para validar as configurações realizadas. O código gravado na placa fará com que o led pisque intermitentemente, em loop;

### Random Run

Como o próprio nome diz, o código fará com que o "robo explorer" ande aleatoriamente pelo espaço. Passo importante para validar o funcionamento da mecanica e dos motores.

### Joystick Wifi

Código mais sofisticado, que faz uso intensivo de wifi, web server, async e web sockets. A lógica implementada é reponsável pela criaça de serviço web que é possível a interação do usuário por meio de outro dispositvo, como celular. Uma rede é criada e um endereço para acesso é disponibilizado. Ex:

- Rede Wifi: Vespa-xxx-xx
- Senha: rc-vespa
- Url: 192.168.4.1

> A diferença entre a v1 e a v2 é a orientação do joystick. Por erro na montagem do Robo Explorer, foi necessário inverter as resposta aos "graus" do joystick virtual.
