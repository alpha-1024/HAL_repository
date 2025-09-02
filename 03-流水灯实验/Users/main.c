#include "sys.h"
#include "delay.h"
#include "led.h"

int main(void)
{
    HAL_Init();                     /* ��ʼ��HAL�� */
    stm32_clock_init(RCC_PLL_MUL9); /* ����ʱ��, 72Mhz */
    led1_init();                    /* ��ʼ��LED�� */
    led2_init();                    //    led1_on();                        /* ����LED1 */
                                    //    led1_off();                       /* Ϩ��LED1 */

    while (1)
    {
        led1_toggle();
        led2_toggle();

        delay_ms(1000);
    }
}
