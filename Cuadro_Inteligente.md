# Cuadro de Arte Dinámico
El Cuadro de Arte Dinámico es un módulo desarrollado con Arduino UNO y una pantalla OLED SSD1306, diseñado para mostrar información visual de forma dinámica.

Su función principal es simular un cuadro digital interactivo, donde el contenido cambia en el tiempo, permitiendo mostrar textos o elementos visuales como mensajes, títulos o animaciones simples.

## Funcionamiento del sistema

El sistema funciona mediante un Arduino UNO, que actúa como controlador principal y envía la información a la pantalla OLED.

El funcionamiento se basa en los siguientes pasos:

El Arduino inicializa la pantalla OLED mediante la librería:
Adafruit_SSD1306
Adafruit_GFX
La comunicación entre el Arduino y la pantalla se realiza mediante el protocolo I2C, lo que reduce el número de conexiones físicas a solo cuatro pines.
El programa envía datos a la pantalla como:
Textos
Mensajes dinámicos
Cambios de contenido en intervalos de tiempo
La pantalla se actualiza continuamente dentro del loop(), permitiendo que el contenido cambie automáticamente, generando el efecto de “cuadro dinámico”.

<img width="686" height="543" alt="image" src="https://github.com/user-attachments/assets/40877d7b-ed59-4080-a2ba-cc397306d504" />


## Conexiones realizadas (OLED SSD1306 – 4 pines)

La pantalla OLED se conecta al Arduino de la siguiente manera:

VCC → 5V
GND → GND
SDA → A4
SCL → A5

<img width="591" height="638" alt="image" src="https://github.com/user-attachments/assets/ebb8e391-37ab-4597-b332-b1165e72a7c4" />

## Resultado del módulo

El Cuadro de Arte  permite:

Mostrar textos dinámicos en una pantalla OLED
Actualizar contenido automáticamente
Crear efectos visuales simples (cambios de pantalla)
Implementar una interfaz visual compacta y eficiente

En conjunto, este módulo demuestra cómo el Arduino puede controlar una pantalla OLED para generar una experiencia visual tipo “arte digital dinámico” con muy pocas conexiones físicas.

### Video subido de funcionamiento del cuadro en la raiz del repositorio
