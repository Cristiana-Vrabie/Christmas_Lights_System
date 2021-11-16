/**
 * \file       dio.c
 * \author     
 * \brief      Short description for this source file
 */
    
/*----------------------------------------------------------------------------*/
/*                                 Includes                                   */
/*----------------------------------------------------------------------------*/

#include "../DIO/dio.h"

/*----------------------------------------------------------------------------*/
/*                               Local defines                                */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                              Local data types                              */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Global data at RAM                             */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Global data at ROM                             */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Local data at RAM                              */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Local data at ROM                              */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                       Declaration of local functions                       */
/*----------------------------------------------------------------------------*/
/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
/*----------------------------------------------------------------------------*/
/*                     Implementation of global functions                     */
/*----------------------------------------------------------------------------*/
/**
 * \brief     This function sets the direction of the pin;
 * \param     pin - represents the microcontroller pin
 * \param     direction - represents the pin direction I/O
 * \return    None 
 */
void Dio_vSetPinDirection(uint8_t port_pin, Dio_tPinDirectionType direction) 
{
    uint8_t port;
    uint8_t pin;
    
    port = MASK_8BIT_MSB(port_pin);
    pin = MASK_8BIT_LSB(port_pin);
    
    switch(port)
    {
        case 0x0A: 
        {
            break;
        }
        case 0x0B:
        {
            break;            
        }
        case 0x0C:
        {
            break;
        }
        case 0x0E:
        {
            break;
        }
        default: 
        {
            /* Do nothing */
            break;
        }
    }
    
    
}

/**
 * \brief     This function sets the level of the output pin
 * \param     pin - represents the microcontroller pin
 * \param     level - represents the pin level
 * \return    None 
 */
void Dio_vSetPinLevel(uint8_t pin, Dio_tPinLogicLevel level) 
{
    
}

/**
 * \brief     This function gets the level of the pin
 * \param     pin - represents the microcontroller pin
 * \return    Dio_tPinLogicLevel - pin level 
 */
Dio_tPinLogicLevel Dio_vGetPinLevel(uint8_t pin) 
{
    
}
/*----------------------------------------------------------------------------*/
/*                     Implementation of local functions                      */
/*----------------------------------------------------------------------------*/


