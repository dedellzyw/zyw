基于stm32f103的示波器
	本实验利用MiniSTM32开发板连接ALIENTEK TFTLCD模块(除CPLD版本7寸屏模块外,其余所有ALIENTEK的
	LCD模块都可以支持)，实现TFTLCD模块的示波器。
注意事项:  
	1,4.3寸和7寸屏需要比较大电流,USB供电可能不足,请用外部电源供电(5V电源，接VOUT2即可).
	2,本例程在LCD_Init函数里面(在ILI93xx.c),用到了printf,如果不初始化串口1,将导致液晶无法显示!! 
	3,LCD模块在开发板的LCD接口上面，必须靠右插。 
	
	
					
