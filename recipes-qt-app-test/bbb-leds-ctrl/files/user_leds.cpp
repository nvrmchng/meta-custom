#include "user_leds.h"

using namespace std;

void user_leds_init()
{
    ofstream fs;
    for(int i=0; i<4; i++){
        fs.open(LED_PATH + to_string(i) + "/trigger");
        fs << "none";
        fs.close();
    }
    turn_led_off(LED0);
    turn_led_off(LED1);
    turn_led_off(LED2);
    turn_led_off(LED3);
}

void turn_led_on(LED_NUMBER led)
{
    ofstream fs;
    fs.open(LED_PATH + to_string(led) + "/brightness");
    fs << "1";
    fs.close();
}

void turn_led_off(LED_NUMBER led)
{
    ofstream fs;
    fs.open(LED_PATH + to_string(led) + "/brightness");
    fs << "0";
    fs.close();
}

void restore_leds()
{
    string default_led_trigger[4] = {"heartbeat", "mmc0", "cpu0", "mmc1"};
    ofstream fs;
    for(int i=0; i<4; i++){
        fs.open(LED_PATH + to_string(i) + "/trigger");
        fs << default_led_trigger[i];
        fs.close();
    }
}
