/* 
 * File:   ecu_seven_seg.h
 * Author: mahmoud yasser
 *
 * Created on August 20, 2023, 3:48 PM
 */

#ifndef ECU_SEVEN_SEG_H
#define	ECU_SEVEN_SEG_H

/* Section : Includes */
#include "ecu_seven_seg_cfg.h"
#include "../../MCAL/GPIO/hal_gpio.h"


/* Section: Macro Declarations */
#define SEGMENT_PIN0        0
#define SEGMENT_PIN1        1
#define SEGMENT_PIN2        2
#define SEGMENT_PIN3        3
/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */
typedef enum 
{
    SEGMENT_COMMON_ANODE,
    SEGMENT_COMMON_CATHODE        
}segment_type_t;

typedef struct 
{
    pin_config_t segment_pins[4];
    segment_type_t segment_type;
}segment_t;
/* Section: Function Declarations */
Std_ReturnType segment_initialize(const segment_t *seg);
Std_ReturnType segment_write_number(const segment_t *seg,uint8 number);


#endif	/* ECU_SEVEN_SEG_H */



