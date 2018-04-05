#include "mbed.h"
#include "ESP8266Interface.h"

int main() {
    ESP8266Interface net(PD_5, PA_3);

    int connected = net.connect("SSID", "PASSWORD");

    if (!connected) {
        printf("Connected!\r\n");
    } else {
        printf("Failed to connect with error code: %d\r\n", connected);
    }

    while(1) {}
}
