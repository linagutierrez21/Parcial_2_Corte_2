# Televisor con juegos en LCD

En este proyecto se realizó un sistema tipo “televisor” utilizando una placa Arduino UNO y una pantalla LCD 16x2, con el objetivo de ejecutar dos juegos básicos programados: un juego tipo dinosaurio (runner) y un simulador de lanzamiento de dado.

Para el desarrollo se utilizó la librería LiquidCrystal, la cual permite controlar la pantalla LCD desde Arduino. A través de esta librería se pudo escribir texto, mover el cursor, borrar la pantalla y mostrar información dinámica en tiempo real.

## ¿Cómo se realizaron las conexiones?

La pantalla LCD se conectó en modo de 4 bits, lo que significa que no se utilizaron todos los pines de datos, sino solo los necesarios para optimizar el uso del Arduino.

Las conexiones fueron las siguientes:

- El pin VSS de la LCD se conectó a GND del Arduino.
- El pin VDD se conectó a 5V.
- El pin VO (contraste) se conectó al pin central de un potenciómetro, cuyos extremos van a 5V y GND.
- El pin RS se conectó al pin digital 12 del Arduino.
- El pin E (Enable) se conectó al pin 11.
- Los pines de datos D4, D5, D6 y D7 se conectaron a los pines digitales 5, 4, 3 y 2 respectivamente.
- El pin RW se conectó a GND para dejar la pantalla en modo escritura.
- La iluminación de fondo de la pantalla se conectó a 5V (A) y GND (K).

Con estas conexiones, el Arduino puede controlar completamente la pantalla LCD.

<img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/dc0adcab-0e2f-4c13-9aa2-4109284948d0" />

## ¿Qué se hizo en el sistema?
### 1. Juego del dinosaurio

Se programó un juego tipo “runner” donde un personaje se representa con un símbolo en la pantalla LCD. El personaje cambia de posición entre la parte superior e inferior de la pantalla, mientras un obstáculo se mueve de derecha a izquierda.

El objetivo del juego es evitar que el obstáculo coincida con la posición del personaje. Si ocurre una colisión, el sistema muestra “GAME OVER” y reinicia el juego. Además, se lleva un contador de puntos que aumenta cada vez que el obstáculo logra salir de la pantalla sin colisión.

### 2. Juego del dado

El segundo juego simula el lanzamiento de un dado. El sistema genera números aleatorios del 1 al 6 y los muestra en la pantalla LCD.

Antes de mostrar el resultado final, se realiza una animación donde los números cambian rápidamente, simulando el movimiento de un dado real. Luego se detiene en un número final que representa el resultado del lanzamiento.

<img width="752" height="543" alt="image" src="https://github.com/user-attachments/assets/bbe97653-2c88-4ebc-9d1c-5dd56733fbde" />


 #### Video subido a la Raiz del repositorio
