# Robot Explorer

## Setup do Ambiente de Desenvolvimento

### Pré-Requisitos:

- Conexão com a internet
- Placa Vespa (compatível com Arduíno e com o conversor USB/UART da BlackBoard UNO V2.0 )
- Conhecimentos básicos de lógica de programação;


### Passo a Passo:

1) Download do Arduino IDE, no formato zip - https://www.arduino.cc/en/software
2) Instalar o drive da placa vespa (Windows 10 e 11) - https://www.silabs.com/documents/public/software/CP210x_Universal_Windows_Driver.zip
3) Instalar Pacote de Placas ESP32, no Arduino IDE.
    - Abra a Arduino IDE;
    - Acesse o menu "File" ou "Arquivo" e então o sub-menu "Preferências" ou "Preferences";
    - Copie e cole o link https://dl.espressif.com/dl/package_esp32_index.json no campo "URLs Adicionais para Gerenciador de Placas", e aperto "Ok".
    - No menu "Ferramentas" ou "Tools", no sub-menu "Placa" ou "Board" clique em "Gerenciador de Placas" ou "Boards Manager".
    - Digite "esp32" na barra de pesquisa para encontrar o pacote;
    - Selecione a versão mais atual do pacote "esp32" e clique em instalar;
    - No menu "Ferramentas" ou "Tools" e no sub-menu "Placa" ou "Board", selecione agora a placa "ESP32 Dev Module".
4) Por fim, com a placa conectada via USB no computador, selecione a porta serial correspondente (pode ser validada no "Gerenciador de Dispositivos" do Windows);

## Deploy do Código

### Pré-Requisitos
- Setup do ambiente de desenvolvimento realizado com sucesso;

### Passo a Passo:

1) Após a codificação da lógica (código-fonte) a ser gravada na placa, pressione o botão para iniciar a gravação de código (um círculo com uma seta apontada para a direita) e aguarde alguns instantes. 
2) A IDE irá compilar o código, e então gravá-lo na placa. Assim que a gravação for finalizada, será exibida a mensagem de que a gravação foi finalizada, como:
```
Leaving... 
Hard resetting via RTS pin...
```

## Possíveis Problemas

### Arduino IDE retornou "Failed to execute script esptool the selected serial port Failed to execute script esptool does not exist or your board is not connected"

> Caso você receba esta mensagem ao tentar carregar o código para a placa, é sinal que a porta serial selecionada não está correta, portanto acesse o "Gerenciador de Dispositivos" do seu computador para verificar qual é a porta serial correspondente da sua placa.

### Arduino IDE retornou "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header"
> Esta mensagem é retornada pela IDE quando a placa não responde à tentativa de conexão com o computador. Tente novamente, porém desta vez pressione e mantenha pressionado o botão "BOOT" no momento em que a mensagem "Connecting..." for exibida. Além disso, certifique-se que o modelo de placa na aba "Ferramentas" está corretamente selecionado como "ESP32 Dev Module".

## Bibliotecas

A seguir serão listadas das bibliotecas utilizadas nos códigos dos projetos. Ainda, a seguir, o passo a passao para importar as bibliotecas aos seus projetos.

### Bibliotecas Necessárias

- ArduinoJson: https://s3-sa-east-1.amazonaws.com/robocore-tutoriais/359/ArduinoJson-6.x.zip
- AsyncTCP: https://s3-sa-east-1.amazonaws.com/robocore-tutoriais/359/AsyncTCP-master.zip
- ESPAsyncWebServer: https://s3-sa-east-1.amazonaws.com/robocore-tutoriais/359/ESPAsyncWebServer-master.zip
- RoboCore Vespa: https://github.com/RoboCore/RoboCore_Vespa

### Importando as Bibliotecas ZIP ao Projeto

1) Realize o download das bibliotecas no formato *.zip
2) No menu "Sketch" e submenu "Incluir Biblioteca", selecione a opção "Adicionar Biblioteca .ZIP";
3) Selecione a biblioteca desejada

### Importando as Bibliotecas ao Projeto

1) No menu "Sketch" e submenu "Incluir Biblioteca", selecione a opção "Gerenciar Bibliotecas";
2) Na barra de pesquisa, busque (por exemplo) pela biblioteca "Vespa";
3) Selecione a versão desejada e clique em "Instalar"