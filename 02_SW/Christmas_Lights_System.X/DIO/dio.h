#ifndef DIO_H_
#define DIO_H_

/**
 * \file       main.h
 * \author     
 * \brief      Short description for this header file
 */


/*----------------------------------------------------------------------------*/
/*                                  Includes                                  */
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include <stdlib.h>
#include "../TYPES/types.h"

/*----------------------------------------------------------------------------*/
/*                             Defines and macros                             */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                                 Data types                                 */
/*----------------------------------------------------------------------------*/
typedef enum
{
    DIO_OUTPUT_PIN = 0u, 
    DIO_INPUT_PIN
} Dio_tPinDirectionType;

typedef enum
{
    STD_LOW = 0u, 
    STD_HIGH
} Dio_tPinLogicLevel;


/*----------------------------------------------------------------------------*/
/*                 External declaration of global RAM-Variables               */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                 External declaration of global ROM-Variables               */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                  External declaration of global functions                  */
/*----------------------------------------------------------------------------*/
/**
 * \brief     This function sets the direction of the pin
 * \param     pin - represents the microcontroller pin
 * \param     direction - represents the pin direction I/O
 * \return    None 
 */
void Dio_vSetPinDirection(uint8_t port_pin, Dio_tPinDirectionType direction);

/**
 * \brief     This function sets the level of the output pin
 * \param     pin - represents the microcontroller pin
 * \param     level - represents the pin level
 * \return    None 
 */
void Dio_vSetPinLevel(uint8_t port_pin, Dio_tPinLogicLevel level);

/**
 * \brief     This function gets the level of the pin
 * \param     pin - represents the microcontroller pin
 * \return    bool - pin level 
 */
Dio_tPinLogicLevel Dio_vGetPinLevel(uint8_t pin);

#endif /* DIO_H_ */
