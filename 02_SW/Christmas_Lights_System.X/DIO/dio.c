/**
 * \file       dio.c
 * \author     
 * \brief      Short description for this source file
 */
    
/*----------------------------------------------------------------------------*/
/*                                 Includes                                   */
/*----------------------------------------------------------------------------*/

#include "dio.h"

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
        case 0xA: 
        {
            if(direction == DIO_OUTPUT_PIN) 
            {
                /*Clear pin position from TRISA for setting the pin to output*/
                MASK_REGISTER_CLEAR_BIT(TRISA, pin);
            }
            else 
            {
                /*Clear pin position from TRISA for setting the pin to output*/
                MASK_REGISTER_SET_BIT(TRISA, pin);
            }      
            break;
        }
        case 0xB:
        {
            if(direction == DIO_OUTPUT_PIN) 
            {
                /*Clear pin position from TRISB for setting the pin to output*/
                MASK_REGISTER_CLEAR_BIT(TRISB, pin);
            }
            else 
            {
                /*Clear pin position from TRISB for setting the pin to output*/
                MASK_REGISTER_SET_BIT(TRISB, pin);
            }
            break;            
        }
        case 0xC:
        {
            if(direction == DIO_OUTPUT_PIN) 
            {
                /*Clear pin position from TRISC for setting the pin to output*/
                MASK_REGISTER_CLEAR_BIT(TRISC, pin);
            }
            else 
            {
                /*Clear pin position from TRISC for setting the pin to output*/
                MASK_REGISTER_SET_BIT(TRISC, pin);
            }
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
void Dio_vSetPinLevel(uint8_t port_pin, Dio_tPinLogicLevel level) 
{
    uint8_t port;
    uint8_t pin;
    
    port = MASK_8BIT_MSB(port_pin);
    pin = MASK_8BIT_LSB(port_pin);
    
       switch(port)
    {
        case 0xA: 
        {
            if(level == STD_LOW) 
            {
                /*Clear pin position from TRISA for setting the pin to output*/
                MASK_REGISTER_CLEAR_BIT(LATA, pin);
            }
            else 
            {
                /*Clear pin position from TRISA for setting the pin to output*/
                MASK_REGISTER_SET_BIT(LATA, pin);
            }      
            break;
        }
        case 0xB:
        {
            if(level == STD_LOW) 
            {
                /*Clear pin position from TRISB for setting the pin to output*/
                MASK_REGISTER_CLEAR_BIT(LATB, pin);
            }
            else 
            {
                /*Clear pin position from TRISB for setting the pin to output*/
                MASK_REGISTER_SET_BIT(LATB, pin);
            }
            break;            
        }
        case 0xC:
        {
            if(level == STD_LOW) 
            {
                /*Setting a bit in LATx will drive the pin low*/
                MASK_REGISTER_CLEAR_BIT(LATC, pin);
            }
            else 
            {
                /*Setting a bit in LATx will drive the pin high*/
                MASK_REGISTER_SET_BIT(LATC, pin);
            }
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


