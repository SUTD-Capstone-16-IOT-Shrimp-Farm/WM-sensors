#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_18, GPIO_MODE_INPUT);
    gpio_set_pull_mode(GPIO_NUM_18, GPIO_PULLUP_ONLY);

    // Print Hello World when button is pressed
    while (1) {
        if (gpio_get_level(GPIO_NUM_18) == 1) {
            printf("Hello World!\n");
        }
        vTaskDelay(10);
    }
}
