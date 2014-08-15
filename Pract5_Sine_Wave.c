#include<90s8535.h>
#include<math.h>
#include<delay.h>
Unsigned int sine[]={127,146,164,182,198,213,226,236,245,251,254,254,252,247,239,229,217,203,187,170,152,133,115,96,78,61,46,33,21,12,5,1,0,1,5,12,21,33,46,61,78,96,115};
int i;
void main()
{
 PORTA=0x00;
 DDRA=0xff;
 while(1)
 {
  for(i=0;i<42;i++)
  {
   PORTA=sine[i];
  }
 }
}
