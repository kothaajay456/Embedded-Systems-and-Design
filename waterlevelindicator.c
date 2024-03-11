#include<reg51.h>
sbit Led1  = P2^0; 
sbit Led2=P2^1;
sbit Led3=P2^2;
sbit Led4=P2^3;//pin connected to toggle Led
sbit Switch1 =P1^0;  //Pin connected to toggle led
sbit Switch2 =P1^1;
sbit Switch3 =P1^2;
sbit Switch4 =P1^3;
void main()
{
    Led1=0;
		Led2=0;
		Led3=0;
		Led4=0;//configuring as output pin
    Switch1 = 1;
		Switch2 = 1;
		Switch3 = 1;
		Switch4 = 1;//Configuring as input pin
    while(1) //Continuous monitor the status of the switch.
    {
        if(Switch1 == 1 && Switch2 == 1 && Switch3 == 1  && Switch4 == 1 )
        {
            Led1 =1;
						Led2=1;
						Led3=1;
						Led4=1;//Led On
        }
        else if(Switch1 == 1 && Switch2 == 0 &&  Switch3 == 0 && Switch4==0)
        {
            Led1 =1;
						Led2=0;
						Led3=0;
						Led4=0;//Led Off
        }
				else if(Switch1 == 1 && Switch2 == 1 &&  Switch3 == 0 && Switch4==0)
        {
            Led1 =1;
						Led2=1;
						Led3=0;
						Led4=0;//Led Off
        }
				else if(Switch1 == 1 && Switch2 == 1 &&  Switch3 == 1 && Switch4==0)
        {
            Led1 =1;
						Led2=1;
						Led3=1;
						Led4=0;//Led Off
        }
				else if(Switch1 == 0 && Switch2 == 0 &&  Switch3 == 0 && Switch4==0)
        {
            Led1 =0;
						Led2=0;
						Led3=0;
						Led4=0;//Led Off
        }
    }
}