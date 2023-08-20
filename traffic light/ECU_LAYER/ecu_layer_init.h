/* 
 * File:   ecu_layer_init.h
 * Author: mahmoud yasser
 *
 * Created on August 20, 2023, 4:04 PM
 */

#ifndef ECU_LAYER_INIT_H
#define	ECU_LAYER_INIT_H

/* Section : Includes */
#include "7_SEG/ecu_seven_seg.h"

/* Section: Macro Declarations */
#define light_status        3
#define light_red           0
#define light_yellow        1
#define light_green         2
/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */
typedef struct 
{
    pin_config_t traffic_pin[light_status];
}traffic_index_t;


/* Section: Function Declarations */
void ecu_layer_intialize(void);
#endif	/* ECU_LAYER_INIT_H */

