#include "led.h"
#include "sys.h"

// ��ʼ��GPIO����
void led1_init(void)
{
    GPIO_InitTypeDef gpio_initstruct;
    // ��ʱ��
    __HAL_RCC_GPIOA_CLK_ENABLE(); // ʹ��GPIOBʱ��
    // ����GPIO��ʼ������
    gpio_initstruct.Pin = GPIO_PIN_5;             // LED1��Ӧ������
    gpio_initstruct.Mode = GPIO_MODE_OUTPUT_PP;   // �������
    gpio_initstruct.Pull = GPIO_NOPULL;           // ����
    gpio_initstruct.Speed = GPIO_SPEED_FREQ_HIGH; // ����
    HAL_GPIO_Init(GPIOA, &gpio_initstruct);
    // �ر�LED
    led1_off();
}
void led2_init(void)
{
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_initstruct;
    GPIO_initstruct.Pin = GPIO_PIN_0;
    GPIO_initstruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_initstruct.Pull = GPIO_NOPULL;
    GPIO_initstruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_initstruct);

    led2_off();
}
// ����LED1�ĺ���
void led1_on(void)
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET); // ����LED1���ţ�����LED1
}

// Ϩ��LED1�ĺ���
void led1_off(void)
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET); // ����LED1���ţ�Ϩ��LED1
}
void led2_ON(void)
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
}
void led2_off(void)
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
}
// ��תLED1״̬�ĺ���
void led1_toggle(void)
{
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}
void led2_toggle(void)
{
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);
}