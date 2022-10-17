/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtrl.h
 *       Module:  SysCtrl
 *
 *  Description:  SysCtrl module header file     
 *  
 *********************************************************************************************************************/
#ifndef SYSCTRL_H
#define SYSCTRL_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "SysCtrl_Cfg.h"
#include "SysCtrl_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/******************************************************************************
* \Syntax          : void SysCtrl_Init(void)                                      
* \Description     : initialize clock from RCC ,RCC2 and open clock for peripherals                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void SysCtrl_Init(void);
/******************************************************************************
* \Syntax          : void SysCtrl_EnablePeripheralClock(SysCtrl_PeripheralClock)                                      
* \Description     : initialize clock from RCC ,RCC2 and open clock for peripherals                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
 void SysCtrl_EnablePeripheralClock(SysCtrl_PeripheralClock PeripheralClock);  
 
#endif  /* SYSCTRL_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/