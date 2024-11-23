#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

#define LED_TRIGGER_PATH "/sys/class/leds/led0/trigger"
#define LED_BRIGHTNESS_PATH "/sys/class/leds/led0/brightness"

void setLEDTrigger(const std::string& trigger) {
    std::ofstream triggerFile(LED_TRIGGER_PATH);
    if (!triggerFile.is_open()) {
        std::cerr << "Error: Unable to access LED trigger file. Run as root." << std::endl;
        return;
    }
    triggerFile << trigger;
    triggerFile.close();
}

void setLEDBrightness(int value) {
    std::ofstream brightnessFile(LED_BRIGHTNESS_PATH);
    if (!brightnessFile.is_open()) {
        std::cerr << "Error: Unable to access LED brightness file. Run as root." << std::endl;
        return;
    }
    brightnessFile << value;
    brightnessFile.close();
}

int main() {
    std::cout << "Starting onboard LED blinking program!" << std::endl;

    // Set the LED trigger to "none" to manually control the LED
    setLEDTrigger("none");

    // Blink the LED
    while (true) {
        setLEDBrightness(1); // Turn LED on
        std::cout << "LED ON" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));

        setLEDBrightness(0); // Turn LED off
        std::cout << "LED OFF" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
