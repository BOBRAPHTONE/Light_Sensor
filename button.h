/*button header file 

 file containing all funtions relating to 
 button ie
    (i)  processing button press
    (ii) debuuncing button

*/
#ifndef _button_h
#define _button_h

//constants or things that dont change in  program life cycle
int red_led = 2; /* red led connected to pin 2 */
int green_led = 3; /* green led connected to pin 3 */
int blue_led = 4; /* blue led connected to pin 4 */
// use #defines for leds ..pins
#define button 5
#define button1 6
#define PI 3.142
#define MAX_TEMP 100 /*maximum temperature of room */
#define HIGH 1
#define LOW 0

//funtion prototypes 

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

/* processing the button
* press functionality 
*/
void process_button_state(int button_pressed);

/* funtion to add two numbbers */
int add_numbers(int x ,int y);



#endif

