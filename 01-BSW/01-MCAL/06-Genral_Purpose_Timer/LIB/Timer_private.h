/************************************************************************** */
/* Author	: Eslam Ehab Aboutaleb    										*/
/* File		: Timer_private.h                                	    		*/
/* Version	: V01                                                           */
/* Date		: 15-11-2020                                                    */
/************************************************************************** */

#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

#define TIMER1_BASE_ADDRESS                        0x40012C00
#define TIMER2_BASE_ADDRESS                        0x40000000
#define TIMER3_BASE_ADDRESS                        0x40000400
#define TIMER4_BASE_ADDRESS                        0x40000800
#define TIMER5_BASE_ADDRESS                        0x40000C00
#define TIMER6_BASE_ADDRESS                        0x40001000
#define TIMER7_BASE_ADDRESS                        0x40001400
#define TIMER8_BASE_ADDRESS                        0x40013400
#define TIMER9_BASE_ADDRESS                        0x40014C00
#define TIMER10_BASE_ADDRESS                       0x40015000
#define TIMER11_BASE_ADDRESS                       0x40015400
#define TIMER12_BASE_ADDRESS                       0x40001800
#define TIMER13_BASE_ADDRESS                       0x40001C00
#define TIMER14_BASE_ADDRESS                       0x40002000

#define TIMER1                   ((TIM_TypeDef*)TIMER1_BASE_ADDRESS)
#define TIMER2                   ((TIM_TypeDef*)TIMER2_BASE_ADDRESS)
#define TIMER3                   ((TIM_TypeDef*)TIMER3_BASE_ADDRESS)
#define TIMER4                   ((TIM_TypeDef*)TIMER4_BASE_ADDRESS)
#define TIMER5                   ((TIM_TypeDef*)TIMER5_BASE_ADDRESS)
#define TIMER6                   ((TIM_TypeDef*)TIMER6_BASE_ADDRESS)
#define TIMER7                   ((TIM_TypeDef*)TIMER7_BASE_ADDRESS)
#define TIMER8                   ((TIM_TypeDef*)TIMER8_BASE_ADDRESS)
#define TIMER9                   ((TIM_TypeDef*)TIMER9_BASE_ADDRESS)
#define TIMER10                  ((TIM_TypeDef*)TIMER10_BASE_ADDRESS)
#define TIMER11                  ((TIM_TypeDef*)TIMER11_BASE_ADDRESS)
#define TIMER12                  ((TIM_TypeDef*)TIMER12_BASE_ADDRESS)
#define TIMER13                  ((TIM_TypeDef*)TIMER13_BASE_ADDRESS)
#define TIMER14                  ((TIM_TypeDef*)TIMER14_BASE_ADDRESS)


typedef struct
{
  volatile uint16_t CR1;
  uint16_t  RESERVED0;
  volatile uint16_t CR2;
  uint16_t  RESERVED1;
  volatile uint16_t SMCR;
  uint16_t  RESERVED2;
  volatile uint16_t DIER;
  uint16_t  RESERVED3;
  volatile uint16_t SR;
  uint16_t  RESERVED4;
  volatile uint16_t EGR;
  uint16_t  RESERVED5;
  volatile uint16_t CCMR1;
  uint16_t  RESERVED6;
  volatile uint16_t CCMR2;
  uint16_t  RESERVED7;
  volatile uint16_t CCER;
  uint16_t  RESERVED8;
  volatile uint16_t CNT;
  uint16_t  RESERVED9;
  volatile uint16_t PSC;
  uint16_t  RESERVED10;
  volatile uint16_t ARR;
  uint16_t  RESERVED11;
  volatile uint16_t RCR;
  uint16_t  RESERVED12;
  volatile uint16_t CCR1;
  uint16_t  RESERVED13;
  volatile uint16_t CCR2;
  uint16_t  RESERVED14;
  volatile uint16_t CCR3;
  uint16_t  RESERVED15;
  volatile uint16_t CCR4;
  uint16_t  RESERVED16;
  volatile uint16_t BDTR;
  uint16_t  RESERVED17;
  volatile uint16_t DCR;
  uint16_t  RESERVED18;
  volatile uint16_t DMAR;
  uint16_t  RESERVED19;
} TIM_TypeDef;




#endif
