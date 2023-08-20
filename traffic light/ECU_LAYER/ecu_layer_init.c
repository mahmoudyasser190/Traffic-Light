/* 
 * File:   ecu_layer_init.c
 * Author: mahmoud yasser
 *
 * Created on August 20, 2023, 4:04 PM
 */


#include "ecu_layer_init.h"


traffic_index_t traffic_index=
{
    .traffic_pin[light_red].port=PORTD_INDEX,
    .traffic_pin[light_red].pin=GPIO_PIN0,
    .traffic_pin[light_red].direction=GPIO_DIRECTION_OUTPUT,
    .traffic_pin[light_red].logic=GPIO_LOW,
    
    .traffic_pin[light_yellow].port=PORTD_INDEX,
    .traffic_pin[light_yellow].pin=GPIO_PIN1,
    .traffic_pin[light_yellow].direction=GPIO_DIRECTION_OUTPUT,
    .traffic_pin[light_yellow].logic=GPIO_LOW,
    
    .traffic_pin[light_green].port=PORTD_INDEX,
    .traffic_pin[light_green].pin=GPIO_PIN2,
    .traffic_pin[light_green].direction=GPIO_DIRECTION_OUTPUT,
    .traffic_pin[light_green].logic=GPIO_LOW,
    
};



segment_t  seg1=
{
    .segment_pins[SEGMENT_PIN0].port=PORTC_INDEX,
    .segment_pins[SEGMENT_PIN0].pin=GPIO_PIN0,
    .segment_pins[SEGMENT_PIN0].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEGMENT_PIN0].logic=GPIO_LOW,
    .segment_pins[SEGMENT_PIN1].port=PORTC_INDEX,
    .segment_pins[SEGMENT_PIN1].pin=GPIO_PIN1,
    .segment_pins[SEGMENT_PIN1].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEGMENT_PIN1].logic=GPIO_LOW,
    .segment_pins[SEGMENT_PIN2].port=PORTC_INDEX,
    .segment_pins[SEGMENT_PIN2].pin=GPIO_PIN2,
    .segment_pins[SEGMENT_PIN2].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEGMENT_PIN2].logic=GPIO_LOW,
    .segment_pins[SEGMENT_PIN3].port=PORTC_INDEX,
    .segment_pins[SEGMENT_PIN3].pin=GPIO_PIN3,
    .segment_pins[SEGMENT_PIN3].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEGMENT_PIN3].logic=GPIO_LOW,
    .segment_type= SEGMENT_COMMON_ANODE
};



void ecu_layer_intialize(void)
{
    Std_ReturnType ret=E_NOT_OK;
    ret=segment_initialize(&seg1);
    
}
