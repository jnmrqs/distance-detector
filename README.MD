# Distance Detector com Arduino

> Um detector de distância simples e eficaz que utiliza um Arduino Nano e um sensor ultrassônico HC-SR04 para fornecer feedback visual sobre a proximidade de objetos.

![Status do Projeto](https://img.shields.io/badge/status-conclu%C3%ADdo-brightgreen)
![GitHub issues](https://img.shields.io/github/issues/jnmrqs/distance-detector)
![GitHub forks](https://img.shields.io/github/forks/jnmrqs/distance-detector)
![GitHub stars](https://img.shields.io/github/stars/jnmrqs/distance-detector)
![License](https://img.shields.io/github/license/jnmrqs/distance-detector)

---

![Demonstração do Projeto](https://github.com/jnmrqs/distance-detector/assets/circuit.png)

---

## 📖 Índice

* [Sobre o Projeto](#-sobre-o-projeto)
* [✨ Funcionalidades](#-funcionalidades)
* [🛠️ Componentes e Tecnologias](#️-componentes-e-tecnologias)
* [🔌 Montagem do Circuito](#-montagem-do-circuito)
* [⚙️ Instalação do Firmware](#️-instalação-do-firmware)
* [🚀 Como Usar](#-como-usar)
* [🤝 Como Contribuir](#-como-contribuir)
* [📄 Licença](#-licença)

## 💻 Sobre o Projeto

O **Distance Detector** foi criado para explorar aplicações práticas de sensores ultrassônicos. Ele pode ser adaptado para diversos cenários, como um sistema de assistência de estacionamento para veículos, um alarme de obstáculos para robôs autônomos ou simplesmente como uma ferramenta educacional para aprender sobre sensores e Arduino.

O princípio de funcionamento é baseado no sensor ultrassônico **HC-SR04**, que emite um pulso sonoro e mede o tempo que ele leva para retornar após atingir um objeto. A distância é então calculada usando a fórmula:
`distância = (duração_do_eco * velocidade_do_som) / 2`.

## ✨ Funcionalidades

- [x] Medição de distância em tempo real.
- [x] Feedback visual com LEDs de três cores (verde, amarelo e vermelho) para indicar diferentes faixas de proximidade (Longe, Médio, Perto).
- [x] Exibição da distância exata em centímetros em um display LCD.

## 🛠️ Componentes e Tecnologias

### Hardware
* Arduino Nano
* Sensor Ultrassônico HC-SR04
* LED Verde (5mm)
* LED Amarelo (5mm)
* LED Vermelho (5mm)
* Display LCD 16x2 com Módulo I2C
* Protoboard e Jumpers

### Software e Ferramentas
* [Visual Studio Code](https://code.visualstudio.com/)
* [PlatformIO IDE](https://platformio.org/install/ide?install=vscode)
* Linguagem C++ (Arduino)

## 🔌 Montagem do Circuito

Para a montagem física, siga o esquema de conexões abaixo.

| Componente                | Pino no Arduino |
| ------------------------- | --------------- |
| **Sensor HC-SR04** |                 |
| ECHO                      | Porta Digital 2 |
| TRIGGER                   | Porta Digital 3 |
| **LEDs** |                 |
| LED Verde                 | Porta Digital 7 |
| LED Amarelo               | Porta Digital 8 |
| LED Vermelho              | Porta Digital 9 |
| **Display LCD (I2C)** |                 |
| SDA                       | Pino Analógico A4 |
| SCL                       | Pino Analógico A5 |

## ⚙️ Instalação do Firmware

Siga os passos abaixo para compilar e enviar o código para a sua placa.

1.  **Clone o Repositório:**
    ```bash
    git clone [https://github.com/jnmrqs/distance-detector.git](https://github.com/jnmrqs/distance-detector.git)
    ```
2.  **Abra no VS Code:**
    Navegue até a pasta do projeto e abra-a com o Visual Studio Code.
3.  **Compile e Faça o Upload:**
    Com a extensão PlatformIO instalada, conecte seu Arduino Nano ao computador e utilize o botão de "Upload" (geralmente uma seta →) na barra de status do VS Code.

## 🚀 Como Usar

Após a montagem do circuito e a instalação do firmware, alimente o Arduino Nano (via USB ou uma fonte externa). O sistema iniciará automaticamente.

-   Aponte o sensor HC-SR04 para um objeto.
-   O **display LCD** mostrará a distância exata em centímetros.
-   Os **LEDs** acenderão de acordo com a proximidade:
    -   **LED Verde:** Objeto distante.
    -   **LED Amarelo:** Objeto a uma distância média.
    -   **LED Vermelho:** Objeto muito próximo.

## 🤝 Como Contribuir

Contribuições são o que tornam a comunidade de código aberto um lugar incrível para aprender, inspirar e criar. Qualquer contribuição que você fizer será **muito apreciada**.

1.  Faça um Fork do projeto (`Fork`).
2.  Crie uma Branch para sua Feature (`git checkout -b feature/AmazingFeature`).
3.  Faça o Commit de suas mudanças (`git commit -m 'Add some AmazingFeature'`).
4.  Faça o Push para a Branch (`git push origin feature/AmazingFeature`).
5.  Abra um Pull Request.

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE.md](LICENSE.md) para mais detalhes.