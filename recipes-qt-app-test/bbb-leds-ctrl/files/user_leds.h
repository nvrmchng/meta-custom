#ifndef USER_LEDS_H
#define USER_LEDS_H

#include <fstream>

enum LED_NUMBER {
    LED0 = 0, LED1 = 1, LED2 = 2, LED3 = 3
};

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

void user_leds_init();
void turn_led_on(LED_NUMBER led);
void turn_led_off(LED_NUMBER led);
void restore_leds();

#endif // USER_LEDS_H
