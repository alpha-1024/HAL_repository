#include "sys.h"
#include "delay.h"
#include "led.h"

int main(void)
{
    HAL_Init();                     /* 初始化HAL库 */
    stm32_clock_init(RCC_PLL_MUL9); /* 设置时钟, 72Mhz */
    led1_init();                    /* 初始化LED灯 */
    led2_init();                    //    led1_on();                        /* 点亮LED1 */
                                    //    led1_off();                       /* 熄灭LED1 */

    while (1)
    {
        led1_toggle();
        led2_toggle();

        delay_ms(1000);
    }
}
