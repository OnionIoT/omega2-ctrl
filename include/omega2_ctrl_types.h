#ifndef _OMEGA2_CTRL_TYPES_H_
#define _OMEGA2_CTRL_TYPES_H_


#define MMAP_PATH			"/dev/mem"

typedef enum e_Omega2GpioMux {
	O2_GPIO_MUX_I2C 		= 0,
	O2_GPIO_MUX_UART0,
	O2_GPIO_MUX_UART1,
	O2_GPIO_MUX_UART2,
	O2_GPIO_MUX_PWM0,
	O2_GPIO_MUX_PWM1,
	O2_GPIO_MUX_REFCLK,
	O2_GPIO_MUX_SPI_S,
	O2_GPIO_MUX_SPI_CS1,
	O2_GPIO_MUX_I2S,
	O2_GPIO_MUX_EPHY,
	O2_GPIO_MUX_WLED,
	_O2_NUM_GPIO_MUX
} eOmega2GpioMux;



static struct gpiomux {
	char *name;
	char *func[4];
	unsigned int shift;
	unsigned int mask;
} omega2GpioMux[] = 
{
	{
		.name = "i2c",
		.func = { "i2c", "gpio", NULL, NULL },
		.shift = 20,
		.mask = 0x3,
	}, 
	{
		.name = "uart0",
		.func = { "uart", "gpio", NULL, NULL },
		.shift = 8,
		.mask = 0x3,
	}, 
	{
		.name = "uart1",
		.func = { "uart", "gpio", NULL, NULL },
		.shift = 24,
		.mask = 0x3,
	}, 
	{
		.name = "uart2",
		.func = { "uart", "gpio", "pwm", NULL },
		.shift = 26,
		.mask = 0x3,
	}, 
	{
		.name = "pwm0",
		.func = { "pwm", "gpio", NULL, NULL },
		.shift = 28,
		.mask = 0x3,
	}, 
	{
		.name = "pwm1",
		.func = { "pwm", "gpio", NULL, NULL },
		.shift = 30,
		.mask = 0x3,
	}, 
	{
		.name = "refclk",
		.func = { "refclk", "gpio", NULL, NULL },
		.shift = 18,
		.mask = 0x1,
	}, 
	{
		.name = "spi_s",
		.func = { "spi_s", "gpio", NULL, NULL },
		.shift = 2,
		.mask = 0x3,
	}, 
	{
		.name = "spi_cs1",
		.func = { "spi_cs1", "gpio", NULL, "refclk" },
		.shift = 4,
		.mask = 0x3,
	}, 
	{
		.name = "i2s",
		.func = { "i2s", "gpio", "pcm", NULL },
		.shift = 6,
		.mask = 0x3,
	}, 
	{
		.name = "ephy",
		.func = { "ephy", "gpio", NULL, NULL },
		.shift = 34,
		.mask = 0x3,
	}, 
	{
		.name = "wled",
		.func = { "wled", "gpio", NULL, NULL },
		.shift = 32,
		.mask = 0x3,
	}
};


#endif // _OMEGA2_CTRL_TYPES_H_