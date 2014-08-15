#include<90s8535.h>
#include<delay.h>
void main(void)
{
DDRA=0xff;
PORTA=0xff;
DDRB=0xff;
PORTB=0x00;
#asm("sei");
while(1)
{
delay_ms(1000);
PORTA=PORTA^PORTB;
delay_ms(1000);
PORTB=PORTB^PORTA;
};
}
