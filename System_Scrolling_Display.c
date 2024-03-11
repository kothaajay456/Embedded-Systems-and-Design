#include<reg51.h>
sbit rs =P2^0; 
sbit rw=P2^1; 
sbit e =P2^2; 
void CMD(char );
void delay(int);
void dataw(char );
int main()
{
    short i = 0;
    short k=0;
    char *msg = "KOTHA AJAY KUMAR";
    CMD(0x38);
    CMD(0x0E);
    CMD(0x01);
    CMD(0x80);
    while(1)
    {
        CMD(0x8f); 
        for(k=0;msg[k]!='\0';k++)
        {
          dataw(msg[k]);
        }
        for(i=0;msg[i]!='\0'; i++)
        {
            CMD(0x1c);
            delay(25);
        }
    }
}
void CMD(char a)
{
  P1=a;
  rs=0;
  rw=0;
  e=1;
  delay(1);
  e=0;
}
void dataw(char p)
{
  P1=p;
  rs=1;
  rw=0;
  e=1;
  delay(1);
  e=0;
}

void delay(int time)
{
    int j,k;
    for(j=0; j<time; j++)
    {
        for(k=0; k<1000; k++);
    }
}