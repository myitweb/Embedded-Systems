#include<delay.h>
unsigned char ledStatus=0x01;
void main(void)
{
DDRB=0xff;
#asm("sei");
while(1)
{
PORTB=ledStatus;
if(ledStatus==0x80)
ledStatus=0x01;
else
ledStatus<<=1;
delay_ms(1000);
};
}
