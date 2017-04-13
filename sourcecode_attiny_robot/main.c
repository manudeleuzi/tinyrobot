/* Name: 		testprogramm
 * Author: 		Manuel Leuzinger - manuleuzi@gmx.ch
 * Datum&Ort:	07.06.2016 - Seuzach
 * kommentar:	Testversuch
 *
 */

#include <avr/io.h>		//Bibliotheken aufbeschoeren
#define F_CPU 8000000
#include <util/delay.h>

int main(void){

	DDRB = 0x1F;	//PORTB als Ausgang
    
    while(1){
        
        PORTB |= (1<<PB4);
		_delay_ms(200);
		PORTB &= ~(1<<PB4);
		_delay_ms(200);
		        
    }//End of while(1)
    return 0;
}//end of main
