/*******************************************************************************
****版本：V1.0.0
****平台：STM8S
****日期：2021-01-12
****作者：Qitas
****版权：OS-Q
*******************************************************************************/
// #include <stdint.h>
// #include <stdio.h>
#include "main.h"

void led_init(void)
{
    GPIOB->DDR|=0x20;
    GPIOB->CR1|=0x20;
    GPIOB->CR2|=0x00;
}

/*******************************************************************************
**函数信息 ：
**功能描述 ：
**输入参数 ：
**输出参数 ：
*******************************************************************************/
void main()
{
    led_init();
    clk_init();
    dog_init();
    // GPIOB->ODR ^= 0x20;
    // delay_ms(100);
    while(1)
    {
        feed_dog();
        GPIOB->ODR ^= 0x20;
        delay_ms(600);
    }
}


/*---------------------------(C) COPYRIGHT 2021 OS-Q -------------------------*/