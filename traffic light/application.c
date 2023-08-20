/* 
 * File:   application.c
 * Author: mahmoud yasser
 *
 * Created on August 20, 2023, 3:39 PM
 */



#include "application.h"

/*
 * 
 */
Std_ReturnType ret=E_NOT_OK;
uint8 counter=0;
uint8 traffic_status=0;
int main() 
{
   application_intialize();
   while(1)
   {
       
      
      for(counter=0;counter<light_status;counter++)
      {
          traffic_status=counter;
          ret=segment_write_number(&seg1,counter);
          if(E_OK==ret)
          {
              ret=gpio_pin_write_logic(&(traffic_index.traffic_pin[traffic_status]),GPIO_HIGH);
               __delay_ms(3000);
          }
           ret=gpio_pin_write_logic(&(traffic_index.traffic_pin[traffic_status]),GPIO_LOW);
      }
   }

    return (EXIT_SUCCESS);
}
void application_intialize(void)
{
    Std_ReturnType ret=E_OK;
    ecu_layer_intialize();
    ret=gpio_pin_intialize(&(traffic_index.traffic_pin[0]));
    ret=gpio_pin_intialize(&(traffic_index.traffic_pin[1]));
    ret=gpio_pin_intialize(&(traffic_index.traffic_pin[2]));
    
}
