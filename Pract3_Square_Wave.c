#include<90s8535.h>
void main(void)
{
int i=0;
DDRA=0xff;

while(1)
{
for(i=0;i<255;i++)
{
PORTA=0;
}
for(i=0;i<255;i++)
{
PORTA=255;
}
}
}

