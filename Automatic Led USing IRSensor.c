#include<reg51.h>
sbit a=P1^1;
sbit b=P2^0;
void delay(int);
int main()
{
  while(1)
  {
    if(a==0)
    {
    b=0;
    }
    else
    {
    b=1;
  }
    delay(100);
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