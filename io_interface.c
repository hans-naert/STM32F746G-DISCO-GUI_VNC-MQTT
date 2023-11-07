#include "main.h"

void set_led0(int high)
{
	HAL_GPIO_WritePin(EXT_SHLD_LED0_GPIO_Port, EXT_SHLD_LED0_Pin, high?GPIO_PIN_SET:GPIO_PIN_RESET);
}