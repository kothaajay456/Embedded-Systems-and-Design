#include<reg51.h>
sbit inp=P1^4;
sbit a=P1^1;
sbit b=P1^2;
void delay(int);
int main()
{
  while(1)
  {
		if(inp==1)
		{
			a=1;
			b=0;
			delay(1000);
			a=0;
			b=1;
			delay(1000);
		}
		else
		{
			a=b=0;
		}
}
}

void delay(int time)
{
  int i,j;
  for(i=0;i<time;i++)
  {
    for(j=0;j<1000;j++)
    {
    }
  }
}
