/* 
 * File:   application.h
 * Author: mahmoud yasser
 *
 * Created on August 20, 2023, 3:39 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

/* Section : Includes */
#include "ECU_Layer/ecu_layer_init.h"


/* Section: Macro Declarations */



/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */
//extern keypad_t keypad1;
extern segment_t  seg1;
extern traffic_index_t traffic_index;


/* Section: Function Declarations */
void application_intialize(void);



#endif	/* APPLICATION_H */


