#include <Arduino.h> // Required for all code

// Count of loop iterations
static uint32_t iteration_count = 0;

void setup()
{
    // Initialize serial communications
    Serial.begin(115200);

    // Enable LED
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);

    Serial.println("Setup done");
}

void loop()
{
    // Print how many times we've looped
    iteration_count++;
    Serial.printf("Loop running: iteration %d\n", iteration_count);

    // Toggle LED
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
}
