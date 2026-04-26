#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  randomSeed(analogRead(0));
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Lanzando dado");

  // Animación (cambia rápido)
  for (int i = 0; i < 10; i++) {
    int temp = random(1, 7);
    lcd.setCursor(0, 1);
    lcd.print(temp);
    delay(100);
  }

  // Resultado final
  int numero = random(1, 7);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Resultado:");
  lcd.setCursor(0, 1);
  lcd.print(numero);

  delay(3000);
}
