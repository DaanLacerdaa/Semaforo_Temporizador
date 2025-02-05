# 🚦 Projeto: Sistema de Semáforo com Raspberry Pi Pico W

Este projeto apresenta uma implementação de um **sistema de semafóro automatizado** utilizando **Raspberry Pi Pico W**, operando LEDs que representam os estados padrão do trânsito: vermelho, amarelo e verde. O código é desenvolvido em **linguagem C**, utilizando o **Pico SDK** no ambiente **VSCode**, e faz uso de um temporizador para alternar os estados do semáforo a cada 3 segundos.

## 🎯 Objetivo

O objetivo deste projeto é explorar a interface de controle de **GPIOs** no Raspberry Pi Pico W, fazendo uso de temporizadores e da função **add_repeating_timer_ms()**. Além disso, o sistema imprime o estado atual do semáforo na interface serial do microcontrolador, permitindo monitoramento em tempo real.

## 🛠 Tecnologias Utilizadas

- **Raspberry Pi Pico W**
- **Linguagem C**
- **Pico SDK**
- **VSCode** com **Raspberry Pi Pico SDK**
- **Simulação em Wokwi**

---

## 📌 Funcionamento do Código

1. **Inicialização dos GPIOs** do Raspberry Pi Pico W para o controle de LEDs:
   - **GPIO 13** → LED Vermelho
   - **GPIO 12** → LED Amarelo (a fim de manter integridade de lógica, foi substituído por azul, mantendo o padrão RGB. Mas ao se utilizar o acionamento simultâneo dos LED vermelho e verde, obtém-se o efeito de cor amarela.)
   - **GPIO 11** → LED Verde
2. **Estado inicial vermelho**: o sistema inicia com o LED vermelho aceso.
3. **Configuração de um temporizador** que altera os estados do semáforo em um ciclo de 3 segundos:
   - Vermelho → Amarelo → Verde → Vermelho...
4. **Saída serial periódica**: o estado do semáforo é reportado via comunicação serial a cada segundo.
5. **Ativação sequencial dos LEDs** de acordo com o estado vigente.

## 📥 Instalação e Configuração

### 1️⃣ Configuração do **Pico SDK** no VSCode

Caso ainda não tenha o **Pico SDK** configurado, siga este guia: [Raspberry Pi Pico SDK Setup](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf)

### 2️⃣ Clonagem do Repositório

```bash
git clone https://github.com/DaanLacerdaa/Semaforo_Temporizador.git
cd Semaforo_Temporizador
```

### 3️⃣ Compilação do Código

#### Opção 1: Compilar via Terminal com CMake

```bash
mkdir build
cd build
cmake ..
make
```

O arquivo **.uf2** será gerado, pronto para ser carregado no Pico W.

#### Opção 2: Compilar no VSCode com Raspberry Pi Pico SDK

1. Abra o projeto no **VSCode**.
2. Conecte o **Raspberry Pi Pico W** ao computador via USB.
3. Ative o modo **BOOTSEL** mantendo pressionado o botão BOOTSEL ao conectar o cabo USB.
4. Utilize o **comando em tela** do Raspberry Pi Pico SDK no VSCode para compilar e enviar o código.
5. Teste a execução do código no dispositivo.

### 4️⃣ Monitoramento da Saída Serial

Para visualizar a execução do semáforo em tempo real, conecte-se à porta serial do Raspberry Pi Pico W:

```bash
screen /dev/ttyUSB0 115200
```

---

## 🎥 Demonstração

🔗 **Vídeo do projeto no YouTube:** []

🎮 **Simulação no Wokwi:** [[Wokwi](https://wokwi.com/projects/421901295911407617)]

---

## 👨💻 Autor

| [<img src="https://avatars.githubusercontent.com/DaanLacerdaa" width=115><br><sub>Daan Lacerda</sub>](https://github.com/DaanLacerdaa) |
| :----------------------------------------------------------------------------------------------------------------------------------:   |
| Desenvolvido em **01/2025**

## 📜 Licença

Este projeto está licenciado sob os termos da licença MIT - consulte o arquivo [LICENSE](LICENSE) para mais detalhes.

---

🚀⭐
