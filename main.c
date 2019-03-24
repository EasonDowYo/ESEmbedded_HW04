#include <stdint.h>
#include "reg.h"


int main(void)
{
	pinMode(GPIO_PORTD,LED_GREEN,OUTPUT);
	pinMode(GPIO_PORTD,LED_ORANGE,OUTPUT);
	pinMode(GPIO_PORTD,LED_RED,OUTPUT);
	pinMode(GPIO_PORTD,LED_BLUE,OUTPUT);

	pinMode(GPIO_PORTA,userButtom,INPUT);
	int i=0,t=0;
	while(1){
		t=digitalRead(GPIO_PORTA,userButtom);
		if(t){
		i=1;
		}
		if(i){
			digitalWrite(GPIO_PORTD,LED_GREEN,HIGH);
			digitalWrite(GPIO_PORTD,LED_BLUE,HIGH);
			digitalWrite(GPIO_PORTD,LED_ORANGE,HIGH);
			digitalWrite(GPIO_PORTD,LED_RED,HIGH);
			Delay(500);
			digitalWrite(GPIO_PORTD,LED_GREEN,LOW);
			digitalWrite(GPIO_PORTD,LED_BLUE,LOW);
			digitalWrite(GPIO_PORTD,LED_ORANGE,LOW);
			digitalWrite(GPIO_PORTD,LED_RED,LOW);
			Delay(500);
		}
	}
}
