#include<90s8535.h>
#include<delay.h>
unsigned int motor_statusA=0x00;
unsigned int motor_statusB=0x00;
void main(void)
{
DDRA=0xff;
DDRB=0xff;
#asm("sei")
while(1)
{
if(motor_statusA==0x00)
{
motor_statusA=0x01;
motor_statusB=0x08;
}
PORTA=motor_statusA;
PORTB=motor_statusB;
motor_statusA<<=1;
motor_statusB>>=1;
delay_ms(500);
if(motor_statusA==0x10)
{
motor_statusA=0x01;
motor_statusB=0x01;
PORTA=motor_statusA;
PORTB=motor_statusB;
delay_ms(500);
motor_statusA=0x08;
}
}
}
