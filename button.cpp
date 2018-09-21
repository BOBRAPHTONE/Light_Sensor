#include "button.h"
/* button source file */

/*function for blinking an led 
 * requires the led pin number
 * and the time duration for delay
 * 
 */
void blink_led(int led ,int ms){
    digitalWrite(led ,HIGH);
    delay(ms);
    digitalWrite(led,LOW);
    delay(ms);
}
//funtion prototype --should be in a header file

/* funtion used to display my name
 *  requrires no parameters
 *  prints my name
 */
void display_name(void){
    Serial.println("Hello my name is Bob");
}

/* processing the button
* press functionality 
*/

void process_button_state(int button_pressed){

  button_state = digitalRead(button);
  if(button_state == 1){
    //turn off led and display on serial "led is off"
    digitalWrite(red_led,LOW); //turn red led off
    Serial.println("red led is off");
  }else{
    //turn on  red led and display on serial "red led is on"
    digitalWrite(red_led , HIGH);
    Serial.println("red led is on");
    
  }
}

/* funtion to add two numbbers */
int add_numbers(int x ,int y){
     return x+y ;
}


