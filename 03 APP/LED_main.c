//#include 	<Bit_Math.h>
//#include 	<Std_Types.h>
//#include 	"DIO_interface.h"
//#include	"RCC_interface.h"
//#include	"led.h"
//int main()
// {
// LEDS led;
// led.port = PORTB;
// led.pin = PIN9;
// led.state = 0;
// //System Clock Init
// RCC_voidSysClkInt();
// //Enable RCC
//
// switch (led.port){
// case PORTA: RCC_voidEnablePerClk(RCC_APB2,2);break;
// case PORTB: RCC_voidEnablePerClk(RCC_APB2,3);break;
// case PORTC: RCC_voidEnablePerClk(RCC_APB2,4);break;
// }
// LED_voidLED_init(&led);
// //DIO_voidSetPinDirection(led.port, led.pin, GPIO_INPUT_PULL_UP_DOWN);
// //DIO_voidSetPinValue(led.port, led.pin, GPIO_LOW);
// while(1)
// {
// for(int i=0; i < 5;i++){
// LED_voidToggle(&led);
// _delay_ms(500);
// }
// LED_voidToggle(&led);
// _delay_ms(5000);
// }
// return 0;
// }
