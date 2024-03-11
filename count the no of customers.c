#include<reg51.h>
sbit inpexit=P2^3;
sbit inpentry=P2^4;
sbit rs =P2^0; 
sbit rw=P2^1; 
sbit e =P2^2; 
void CMD(unsigned char );
void checkinp(unsigned int);
void dataw(unsigned char );
void lcd(unsigned char );
void delay(int);
int main()
{
	unsigned int count=0;
	while(1)
	{
		if(inpentry==1)
		{
			count++;
			checkinp(count);
	}
		if(inpexit==1)
		{
			count--;
			checkinp(count);
		}
		delay(20);
	}
}
void delay(int time)
{
	int i,j;
	for(i=0;i<time;i++)
		for(j=0;j<1000;j++);
}
void CMD(unsigned char a)
{
  P1=a;
  rs=0;
  rw=0;
  e=1;
  delay(1);
  e=0;
}
void dataw(unsigned char p)
{
	P1=p;
  rs=1;
  rw=0;
  e=1;
  delay(1);
  e=0;
}
void checkinp(unsigned int COUNT)
{
	unsigned int n,N,msb;
	unsigned char c;
		CMD(0x38);
    CMD(0x0E);
    CMD(0x06);
    CMD(0x81);
		n=COUNT;
	if(n>=100)
		n=n-100;
				N=n%10;
				msb=n/10;
				c=N+48;
				msb=msb+48;
				dataw(msb);
				dataw(c);
}