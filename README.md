# Despertador com Arduino

Este é um projeto de despertador desenvolvido utilizando Arduino, um fotoresistor e um botão. O despertador é ativado quando a intensidade de luz ambiente ultrapassa um determinado limite e pode ser desativado pelo usuário pressionando o botão.

## Componentes Utilizados

- Arduino (qualquer modelo compatível)
- Fotoresistor
- Botão
- Buzzer
- Resistor
- Placa de ensaio

## Instalação e Configuração

1. Conecte o fotoresistor ao pino analógico A0 do Arduino.
2. Conecte o botão ao pino digital 3 do Arduino.
3. Conecte o buzzer ao pino digital 5 do Arduino.
4. Siga as conexões indicadas na imagem .PNG
5. Carregue o código fornecido neste repositório para o Arduino usando a IDE do Arduino.

## Funcionamento

O despertador opera da seguinte forma:

- O Arduino monitora continuamente o estado do fotoresistor e do botão.
- Quando a intensidade de luz ambiente captada pelo fotoresistor ultrapassa um determinado limite (definido como 500 neste código), o despertador é ativado.
- Durante a ativação, o buzzer emite um som que aumenta gradualmente de intensidade até atingir um pico e então diminui novamente, imitando uma sirene policial.
- O usuário pode desativar o despertador pressionando o botão.
- Após desativado, o despertador só será reativado quando a intensidade de luz ambiente cair abaixo do limite e aumentar para 500 novamente.

## Personalização

Você pode personalizar este projeto de acordo com suas necessidades, alterando os valores de limite de luz ambiente, ajustando os tempos de ativação e desativação do buzzer, ou adicionando funcionalidades extras.

## Licença

Este projeto é distribuído sob a licença MIT. Consulte o arquivo `LICENSE` para obter mais informações.

---

Este README fornece uma visão geral do projeto de despertador Arduino. Sinta-se à vontade para expandi-lo com mais detalhes, instruções de montagem física ou qualquer outra informação relevante.
