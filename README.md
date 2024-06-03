# Desenvolvimento de uma plataforma de aprendizagem para auxílio nas disciplinas de Sistemas Embarcados

Autor: João Carlos de Souza Filho | Email: jcsfjoao@hotmail.com \
Orientador: Vagner da Silva Rodrigues | Email: vagner.rodrigues@satc.edu.br

## Motivação
&emsp;&emsp;O presente repositório trata-se de um projeto desenvolvido como um Trabalho de Conclusão de Curso (TCC) do curso de graduação de Engenharia de Computação da instituição UniSATC, no ano de 2024. 

&emsp;&emsp;Link para o artigo: www.adicionarotccaki.com

## Objetivos
&emsp;&emsp;O presente trabalho visa desenvolver uma placa eletrônica com o intuito de tornar a experiência do estudante de sistemas embarcados mais eficaz e didática. \
&emsp;&emsp;Uma vez que o conceito de hardware será simplificado, facilitará e possibilitará o entendimento de lógica de programação de forma focada para que, posteriormente, com um entendimento mais sólido, concilie os conceitos de forma integral e completa. \
&emsp;&emsp;A principal utilização do projeto é permitir que seja possível rapidamente desenvolver algoritmos sem a necessidade de montagem de circuitos utilizando protoboards, que pode acarretar em diversos problemas físicos como mau contato nos terminais dos componentes, montagem inadequada, inversão de polaridade e queima de componentes.

## Especificações
&emsp;&emsp;O projeto foi desenvolvido utilizando a placa de desenvolvimento NodeMCU-32S, que utiliza o microcontrolador ESP32 com Wi-fi integrado, de acordo com a imagem abaixo:

![image](https://github.com/TheJohnnyX/plataforma_embarcados/assets/103773247/cd4d5e2e-6853-4a0c-b70a-8c6077f2a3eb)

Dessa forma, definiu-se os seguintes circuitos para a placa:

- Microcontrolador com Wi-Fi
- Botões
- LED comum e RGB
- Displays de 7 segmentos multiplexados
- Sensor de umidade e temperatura DHT11
- Sensor de distância ultrassônico HC-SR04
- Sensor de luminosidade com um LDR
- Acionamento de cargas com Relé

## Lista de componentes
  
![Sem título](https://github.com/TheJohnnyX/plataforma_embarcados/assets/103773247/b39859ab-8bac-4133-b666-e40cb0e0cc8a)

De acordo com simulações realizadas em sites de venda de componentes eletrônicos feitas em Abril de 2024, os componentes totalizam 104,26 reais.

## Diagrama esquemático

![Diagrama](https://github.com/TheJohnnyX/plataforma_embarcados/assets/103773247/722db01d-8101-48d7-b494-dbb7d913e426)

## Layout - Top Layer

![Layout 2](https://github.com/TheJohnnyX/plataforma_embarcados/assets/103773247/743cc7b1-3faf-493c-a98b-90bb50cf4ecf)

## Layout - Bottom Layer

![Layout 1](https://github.com/TheJohnnyX/plataforma_embarcados/assets/103773247/84feb46f-0a6f-4305-876a-5336b9b55f2a)

## Utilização da placa

&emsp;&emsp;Para utilizar a placa, deve-se utilizar a IDE do arduino ou alguma outra com os plugins necessários como, por exemplo, o VS Code. 

&emsp;&emsp;Além disso, é necessário instalar o pacote de bibliotecas para poder utilizar os recursos do ESP32.

&emsp;&emsp;Sempre que for necessário compilar o código no NodeMCU-32S, deve-se remover o jumper JP1 da placa e, quando a IDE solicitar, pressionar o botão BOOT do NodeMCU-32S. 

&emsp;&emsp;Após isso, insera novamente o jumper JP1 na placa, caso contrário, os circuitos relacionados aos botões não funcionarão.
