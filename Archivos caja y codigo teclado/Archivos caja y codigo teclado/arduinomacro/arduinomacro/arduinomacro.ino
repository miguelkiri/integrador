#include <Keyboard.h>                // Incluimos libreria

void setup() {
  pinMode(2,INPUT_PULLUP);          // indicamos los pins que vamos a utilizar y que son de entrada
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  
  Serial.begin(9600);
}

boolean grabar = false;

void loop() {

 // ------- parar
 
  if(digitalRead(2) == LOW) {        // Pin en el que esta conectado
    Keyboard.begin();                // Llamamos la libreria Keyboard
    Keyboard.press(KEY_LEFT_CTRL);   // Le indicamos que presionamos tecla control de la izquierda
    Keyboard.press('p');             // Le indicamos que presionamos la tecla "p"
    Keyboard.releaseAll();           // Suelta la tecla
    delay(1000);                     // Esperamos un segundo en el que no actua la tecla para evitar rebotes
    
  }
  
  // ------  X+
  
  if(digitalRead(3) == LOW) {
    Keyboard.begin();
    Keyboard.press(KEY_LEFT_ALT);    // Le indicamos que presionamos tecla ALT de la izquierda
    Keyboard.press('a');
    Keyboard.releaseAll();
    delay(1000);
    
  }
  
   // --------   X-
   
  if(digitalRead(4) == LOW) {
    Keyboard.begin();
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('s');
    Keyboard.releaseAll();
    delay(1000);
 
  }
 
  // --------   Y+
  
  if(digitalRead(5) == LOW) {
    Keyboard.begin();
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('d');
    Keyboard.releaseAll();
    delay(1000);
   
  }

   // --------   Y-
   
  if(digitalRead(6) == LOW) {
    Keyboard.begin();
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('g');
    Keyboard.releaseAll();
    delay(1000);
   
  }
  
   //  -------  Z+
   
  if(digitalRead(7) == LOW) {
    Keyboard.begin();
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('j');
    Keyboard.releaseAll();
    delay(1000);
   
  }

   //   ------   Z-
   
  if(digitalRead(8) == LOW) {
    Keyboard.begin();
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('k');
    Keyboard.releaseAll();
    delay(1000);
   
  }
}
