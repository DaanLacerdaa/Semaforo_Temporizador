#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Definição dos pinos do LED RGB
#define LED_VERMELHO 13  // GPIO13 (Vermelho)
#define LED_AMARELO  12  // GPIO12 (Amarelo)
#define LED_VERDE    11  // GPIO11 (Verde)

// Estados do semáforo
volatile int estado = 0;  // 0: vermelho, 1: amarelo, 2: verde

// Callback do temporizador (muda o estado a cada 3s)
bool timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs antes de trocar de estado
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Avança o estado
    estado = (estado + 1) % 3;

    // Atualiza LEDs conforme o estado
    switch (estado) {
        case 0: // Vermelho
            gpio_put(LED_VERMELHO, 1);
            break;
        case 1: // Amarelo
            gpio_put(LED_AMARELO, 1);
            break;
        case 2: // Verde
            gpio_put(LED_VERDE, 1);
            break;
    }

    return true;
}

int main() {
    stdio_init_all(); // Inicializa comunicação serial

    // Configuração dos pinos dos LEDs
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    // Inicia no estado vermelho
    gpio_put(LED_VERMELHO, 1);
    estado = 0;

    // Configura o temporizador de 3 segundos
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, timer_callback, NULL, &timer);

    // Loop principal: imprime o estado do semáforo a cada 1 segundo
    while (true) {
        printf("[Tempo: %llu s] Estado do semáforo: %s\n", 
               time_us_64() / 1000000, 
               (estado == 0) ? "VERMELHO" : 
               (estado == 1) ? "AMARELO" : "VERDE");
        sleep_ms(1000);
    }

    return 0;
}
