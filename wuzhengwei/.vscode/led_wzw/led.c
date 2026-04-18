#include <stdio.h>



void led_OPEN(char *GPIO_code,char *GPIO_PIN_Number)
{



HAL_GPIO_WritePin(GPIO_code,GPIO_PIN_Number,GPIO_PIN_SET);


}


void led_COLSE(char *GPIO_code,char *GPIO_PIN_Number)
{

HAL_GPIO_WritePin(GPIO_code,GPIO_PIN_Number,GPIO_PIN_RESET);

}



void Judge(int P,char *GPIO_code,char *GPIO_PIN_Number)
{

if(P==0)
{

    led_OPEN(GPIO_code,GPIO_PIN_Number)

}

else
{
   led_COLSE(GPIO_code,GPIO_PIN_Number)
}

}






