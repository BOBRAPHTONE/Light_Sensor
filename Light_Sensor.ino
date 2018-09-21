#include "button.h"

int button_state = 0; //off
/*function for blinking an led 
 * requires the led pin number
 * and the time duration for delay
 * 
 */
void blink_led(int led ,int ms); //funtion prototype --should be in a header file

/* funtion used to display my name
 *  requrires no parameters
 *  prints my name
 */
void display_name(void);
  
void setup(){
  /* setting the red ,green,blue leds as an outputs*/
  pinMode(red_led,OUTPUT); 
  pinMode(green_led,OUTPUT);
  pinMode(blue_led,OUTPUT);
  /* Initialize serial console with 9600 baud rate /speed */
  Serial.begin(9600);
  

}

void loop(){
  //calling the blink led function
  blink_led(red_led ,500);
  blink_led(blue_led ,1000);
  display_name();
  process_button_state(button);
  //process_button_state(button1);
  
}

void process_button_state(int button_pressed){

  button_state = digitalRead(button);
  if(button_state == HIGH){
    //turn off led and display on serial "led is off"
    digitalWrite(red_led,LOW); //turn red led off
    Serial.println("red led is off");
  }else{
    //turn on  red led and display on serial "red led is on"
    digitalWrite(red_led,HIGH);
    Serial.println("red led is on");
    
  }
}
void blink_led(int led ,int ms){
  digitalWrite(led ,HIGH);
  delay(ms);
  digitalWrite(led,LOW);
  delay(ms);
}
void display_name(void){

  Serial.println("Hello my name is Bob");
}
//coding standards 
int add_numbers(int x ,int y){
  return x+y ;
}



