#ifndef TYPES_H_
#define TYPES_H_

/**
 * \file       types.h
 * \author     
 * \brief      Short description for this header file
 */


/*----------------------------------------------------------------------------*/
/*                                  Includes                                  */
/*----------------------------------------------------------------------------*/
#include <xc.h>

/*----------------------------------------------------------------------------*/
/*                             Defines and macros                             */
/*----------------------------------------------------------------------------*/
#define MASK_GET_LSB            (0x0Fu)
#define MASK_GET_MSB            (0xF0u)
#define MASK_8BIT_LSB(X)        (x & MASK_GET_LSB)
#define MASK_8BIT_MSB(X)        ((x & MASK_GET_MSB) >> 4u)

/*----------------------------------------------------------------------------*/
/*                                 Data types                                 */
/*----------------------------------------------------------------------------*/

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
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */

#endif /* MAIN_H_ */