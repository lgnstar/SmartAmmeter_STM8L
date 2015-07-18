#ifndef _INCLUDES_H_
#define _INCLUDES_H_

#include "stm8l15x.h"
#include "delay.h"
#include "led.h"
#include "key.h"

#define STM8L_SUCCESS                           (0)  // Successful command
#define STM8L_FAIL                           	(1)  // Fail command

/* Define Trace pins -----------------------------------------------------------*/
#define APP_TRACE_USART							USART3
#define GPIO_PORT_USART_TX  					GPIOE
#define GPIO_PIN_USART_TX  						GPIO_Pin_0

/* Define LED pins -----------------------------------------------------------*/
#define GPIO_PORT_LED1  						GPIOC
#define GPIO_PIN_LED1  							GPIO_Pin_4
#define GPIO_PORT_LED3  						GPIOG
#define GPIO_PIN_LED3  							GPIO_Pin_0

/* Define KEY pins -----------------------------------------------------------*/
#define GPIO_PORT_KEY  							GPIOE
#define GPIO_PIN_KEY  							GPIO_Pin_7
#define EXTI_PIN_KEY 							EXTI_Pin_7
#define EXTI_IT_PIN_KEY							EXTI_IT_Pin7
#define EXTI_Trigger_KEY 						EXTI_Trigger_Falling

/* Exported constants --------------------------------------------------------*/
/* Uncomment the line below to expanse the "assert_param" macro in the 
   Standard Peripheral Library drivers code */
#define USR_ASSERT    			(1) 

/* Exported macro ------------------------------------------------------------*/
#ifdef  USR_ASSERT
/**********************************************************************************
  * @brief  The assert_param macro is used for function's parameters check.
  * @param expr: If expr is false, it calls assert_failed function
  *   which reports the name of the source file and the source
  *   line number of the call that failed. 
  *   If expr is true, it returns no value.
  * @retval : None
**********************************************************************************/
  #define usr_assert(expr) ((expr) ? (void)0 : usr_assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
  void usr_assert_failed(uint8_t* file, uint32_t line);
#else
  #define usr_assert(expr) ((void)0)
#endif /* USR_ASSERT */
	
#endif // End of #ifndef _INCLUDES_H_
