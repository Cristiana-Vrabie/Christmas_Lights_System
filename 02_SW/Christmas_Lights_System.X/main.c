/**
 * \file       main.c
 * \author     
 * \brief      Short description for this source file
 */
    
/*----------------------------------------------------------------------------*/
/*                                 Includes                                   */
/*----------------------------------------------------------------------------*/

#include "mcc_generated_files/mcc.h"
#include "main.h"
#include "DIO/dio.h"

/*----------------------------------------------------------------------------*/
/*                               Local defines                                */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                              Local data types                              */
/*----------------------------------------------------------------------------*/
typedef enum 
{
    LIGHT_TYPE0 = 0,
    LIGHT_TYPE1,
    LIGHT_TYPE2,
    LIGHT_TYPE3,
    LIGHT_TYPE4,
    LIGHT_TYPE5,
    LIGHT_TYPE6,        
    LIGHT_TYPE7,
    LIGHT_TYPE8,
    LIGHT_TYPE9,
    LIGHT_TYPE10,
} eLightType;
/*----------------------------------------------------------------------------*/
/*                             Global data at RAM                             */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                             Global data at ROM                             */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Local data at RAM                              */
/*----------------------------------------------------------------------------*/
static eLightType light_type = LIGHT_TYPE0;
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
void Light_vLightType_0(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_1(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_2(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_3(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_4(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_5(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_6(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_7(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_8(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_9(void);

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_10(void);
/*----------------------------------------------------------------------------*/
/*                     Implementation of global functions                     */
/*----------------------------------------------------------------------------*/
void main(void) 
{
	SYSTEM_Initialize();
    Dio_vSetPinDirection(0xC2,DIO_OUTPUT_PIN);
    Dio_vSetPinDirection(0xC4,DIO_OUTPUT_PIN);
    Dio_vSetPinDirection(0xC5,DIO_OUTPUT_PIN);
    
    while(1) 
    {
        light_type = rand() % 11;
        switch(light_type)
        {
            case LIGHT_TYPE0: 
            {
                Light_vLightType_0();
                break;
            }
            case LIGHT_TYPE1: 
            { 
                Light_vLightType_1();
                break;
            }
            case LIGHT_TYPE2: 
            {
                Light_vLightType_2();
                break;
            }
            case LIGHT_TYPE3: 
            {
                Light_vLightType_3();
                break;
            }
            case LIGHT_TYPE4: 
            {
                Light_vLightType_4();
                break;
            }case LIGHT_TYPE5: 
            {
                Light_vLightType_5();
                break;
            }case LIGHT_TYPE6: 
            {
                Light_vLightType_6();
                break;
            }
            case LIGHT_TYPE7: 
            {
                Light_vLightType_7();
                break;
            }
            case LIGHT_TYPE8:
                Light_vLightType_8();
            {
                break;
            }
            case LIGHT_TYPE9: 
            {
                Light_vLightType_9();
                break;
            }
            case LIGHT_TYPE10: 
            {
                Light_vLightType_10();
                break;
            }
            default: 
            {
                light_type = LIGHT_TYPE0;
                break;
            }          
        }
    }
}

/*----------------------------------------------------------------------------*/
/*                     Implementation of local functions                      */
/*----------------------------------------------------------------------------*/
/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_0(void) 
{
    uint16_t duty_cycle = 0;
    for(duty_cycle = 0; duty_cycle < 1000; duty_cycle+=100) 
    {
        PWM1_LoadDutyValue(duty_cycle);
        PWM2_LoadDutyValue(duty_cycle);
        PWM3_LoadDutyValue(duty_cycle);
        __delay_ms(50);
    }    
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_1(void)
{
    PWM1_LoadDutyValue(800);
    PWM2_LoadDutyValue(300);
    __delay_ms(300);
    PWM3_LoadDutyValue(900);    
    PWM1_LoadDutyValue(100);
    __delay_ms(200);
    PWM2_LoadDutyValue(900);
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_2(void)
{
    uint8_t ucIdx = 0;
    for(ucIdx = 0; ucIdx < 3; ucIdx++) 
    {
        PWM1_LoadDutyValue(800);
        __delay_ms(300);
        PWM1_LoadDutyValue(0);
        PWM2_LoadDutyValue(300);
        __delay_ms(300);
        PWM2_LoadDutyValue(0);
        PWM3_LoadDutyValue(900);
        __delay_ms(300);
        PWM3_LoadDutyValue(0);
    }
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_3(void) 
{ 
    uint16_t duty_cycle = 0; 
    for(duty_cycle = 0; duty_cycle < 500; duty_cycle+=100) 
    {
        PWM1_LoadDutyValue(duty_cycle);
        __delay_ms(50);
        PWM2_LoadDutyValue(duty_cycle + 300);
        __delay_ms(50);
        PWM3_LoadDutyValue(duty_cycle + 200);
        __delay_ms(30);
    }
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_4(void)
{
    uint16_t duty_cycle = 999; 
    for(duty_cycle = 999; duty_cycle > 151; duty_cycle-=150) 
    {
        PWM1_LoadDutyValue(duty_cycle);
        __delay_ms(50);
    }
    
    for(duty_cycle = 0; duty_cycle < 999; duty_cycle+=150) 
    {
        PWM2_LoadDutyValue(duty_cycle);
        __delay_ms(50);
    }
    
    for(duty_cycle = 999; duty_cycle > 151; duty_cycle-=150) 
    {
        PWM3_LoadDutyValue(duty_cycle);
        __delay_ms(50);
    }
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_5(void)
{    
    uint16_t duty_cycle = 999;
    static uint8_t toggle = 0;
    for(duty_cycle = 999; duty_cycle > 151; duty_cycle-=150) 
    {
        PWM3_LoadDutyValue(duty_cycle);
        if(toggle == 0) 
        {
            PWM2_LoadDutyValue(999);
            PWM1_LoadDutyValue(0);
            toggle = 1;
        }
        else 
        {
            PWM2_LoadDutyValue(0);
            PWM1_LoadDutyValue(999);
            toggle = 0;
        }
        
        __delay_ms(50);
    }    
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_6(void)
{
    int ucIdx = 0;
    for(ucIdx = 0; ucIdx < 3; ucIdx++) 
    {
        PWM1_LoadDutyValue(999);
        __delay_ms(100);
        PWM1_LoadDutyValue(0);
        __delay_ms(100);
        PWM1_LoadDutyValue(999);
        __delay_ms(100);
        PWM1_LoadDutyValue(0);
        __delay_ms(100);
        PWM1_LoadDutyValue(999);
        __delay_ms(100);
    }   
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_7(void)
{
    uint16_t duty_cycle = 999;
    PWM2_LoadDutyValue(999);
    __delay_ms(100);
    PWM2_LoadDutyValue(0);
    for(duty_cycle = 999; duty_cycle > 151; duty_cycle-=150)
    {
        PWM1_LoadDutyValue(duty_cycle);
        PWM3_LoadDutyValue(duty_cycle);
        __delay_ms(50);
    }
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_8(void)
{
    int ucIdx = 0;
    for(ucIdx = 0; ucIdx < 3; ucIdx++) 
    {    
        PWM1_LoadDutyValue(999);
        __delay_ms(100);
        PWM2_LoadDutyValue(999);
        __delay_ms(100);
        PWM3_LoadDutyValue(999);
        __delay_ms(100);
        PWM3_LoadDutyValue(999);
        __delay_ms(100);
        PWM2_LoadDutyValue(999);
        __delay_ms(100);
        PWM1_LoadDutyValue(999);
        __delay_ms(100);
    }
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_9(void) 
{
    uint8_t ucIdx = 0;
    uint16_t duty_cycle = 0;
    for(ucIdx = 0; ucIdx < 3; ucIdx++)
    {
        PWM1_LoadDutyValue(0);
        PWM2_LoadDutyValue(999);
        PWM3_LoadDutyValue(999);
        for(duty_cycle = 999; duty_cycle > 151; duty_cycle-=150)
        {
            PWM2_LoadDutyValue(duty_cycle);
            PWM3_LoadDutyValue(duty_cycle);
            __delay_ms(50);
        }
        __delay_ms(50);
    }
}

/**
 * \brief     This function [...];
 * \param     None
 * \return    None 
 */
void Light_vLightType_10(void)
{
    uint16_t duty_cycle = 0;
        for(duty_cycle = 0; duty_cycle < 999; duty_cycle+=300)
        {
            PWM1_LoadDutyValue(duty_cycle);
            __delay_ms(10);
        }
    
}

