/* 
 * File:   ecu_seven_seg.c
 * Author: mahmoud yasser
 *
 * Created on August 20, 2023, 3:48 PM
 */

#include "ecu_seven_seg.h"
/**
 * @brief Initialize the segment @ref direction_t
 * @param seg pointer to the configuration @ref segment_t
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType segment_initialize(const segment_t *seg)
{
    Std_ReturnType ret=E_NOT_OK;
    if(NULL==seg)
    {
        ret=E_NOT_OK;
    }
    else
    {
       ret=gpio_pin_intialize(&(seg->segment_pins[SEGMENT_PIN0]));
       ret=gpio_pin_intialize(&(seg->segment_pins[SEGMENT_PIN1]));
       ret=gpio_pin_intialize(&(seg->segment_pins[SEGMENT_PIN2]));
       ret=gpio_pin_intialize(&(seg->segment_pins[SEGMENT_PIN3]));
        ret=E_OK;
    }
   
   return ret; 
}
/**
 * @brief Initialize the segment @ref direction_t
 * @param seg pointer to the configuration @ref segment_t
 * @param number
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType segment_write_number(const segment_t *seg,uint8 number)
{
    Std_ReturnType ret=E_NOT_OK;
    if(NULL==seg||number>9)
    {
        ret=E_NOT_OK;
    }
    else
    {
        ret=gpio_pin_write_logic(&(seg->segment_pins[SEGMENT_PIN0]),number&0x01);
        ret=gpio_pin_write_logic(&(seg->segment_pins[SEGMENT_PIN1]),(number>>1)&0x01);
        ret=gpio_pin_write_logic(&(seg->segment_pins[SEGMENT_PIN2]),(number>>2)&0x01);
        ret=gpio_pin_write_logic(&(seg->segment_pins[SEGMENT_PIN3]),(number>>3)&0x01);
        
        ret=E_OK;
    }
   
   return ret; 
}
