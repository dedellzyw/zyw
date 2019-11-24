#include "exti.h"
#include "led.h"
#include "key.h"
#include "delay.h"
#include "usart.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK Mini STM32开发板
//外部中断 驱动代码			   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2014/3/06  
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									 
////////////////////////////////////////////////////////////////////////////////// 	  


//外部中断初始化程序
//初始化PA0,PC5,PA15为中断输入.
void EXTI_Init(void)
{
	KEY_Init();
	Ex_NVIC_Config(GPIO_A,0,RTIR); 		//上升沿触发
	Ex_NVIC_Config(GPIO_C,5,FTIR);		//下降沿触发//调节采样率
	Ex_NVIC_Config(GPIO_A,15,FTIR);		//下降沿触发//暂停

	MY_NVIC_Init(2,2,EXTI0_IRQn,2);    	//抢占2，子优先级2，组2
	MY_NVIC_Init(2,1,EXTI9_5_IRQn,2);  	//抢占2，子优先级1，组2
	MY_NVIC_Init(2,0,EXTI15_10_IRQn,2);	//抢占2，子优先级0，组2	   
}












