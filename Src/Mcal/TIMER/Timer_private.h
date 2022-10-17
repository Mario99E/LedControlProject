/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define TIMER0_BASE					(0x40030000) 
#define NEXT_TIMER_OFFSET			(0x1000)


#define GPTMCFG_OFFSET				(0)
#define GPTMTAMR_OFFSET				(0x004)
#define GPTMTBMR_OFFSET				(0x008)
#define GPTMCTL_OFFSET				(0x00C)
#define GPTMTAILR_OFFSET				(0x028)
#define GPTMTBILR_OFFSET				(0x02c)
#define GPTMIMR_OFFSET				(0x018)



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define Timer_0A_ISR		TIMER0A_Handler

void Timer_0A_ISR(void) __attribute__((signal,used));

void (* TIMER_0A_CALLBACK_FUNCITON) (void)=0;
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* TIMER_PRIVATE_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/