#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
// Función para dibujar corazón
void drawHeart(int x, int y, int size) {
 display.fillCircle(x - size, y - size, size, WHITE);
 display.fillCircle(x + size, y - size, size, WHITE);
 display.fillTriangle(x - 2*size, y - size, x + 2*size, y - size, x, y + 2*size, WHITE);
}
void setup() {
 display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
 display.clearDisplay();
 randomSeed(analogRead(0));
}
void loop() {
 display.clearDisplay();
 // Dibujar varios corazones
 for (int i = 0; i < 5; i++) {
   int x = random(10, 118);
   int y = random(10, 54);
   int size = random(2, 5);
   drawHeart(x, y, size);
 }
 display.display();
 delay(400);
}