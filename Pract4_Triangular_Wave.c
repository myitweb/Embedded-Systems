#include<90s8535.h>
#include<delay.h>
int x;
void main(void)
{
DDRA=0xff;
PORTA=0x00;
while(1)
{
for(x=0;x<255;x++)
PORTA=x;
for(x=0;x<255;x--)
PORTA=x;
};
}

