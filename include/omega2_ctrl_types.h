#ifndef _OMEGA2_CTRL_TYPES_H_
#define _OMEGA2_CTRL_TYPES_H_


#define MMAP_PATH			"/dev/mem"

enum {
	MUX_GPIO = 0,
	MUX_SPI_S,
	MUX_SPI_CS1,
	MUX_I2S,
	MUX_UART0,
	MUX_I2C,
	MUX_UART1,
	MUX_UART2,
	MUX_PWM0,
	MUX_PWM1,
	MUX_EPHY,
	MUX_WLED,
	__MUX_MAX,
};

static struct pinmux {
	char *name;
	char *func[4];
	unsigned int shift;
	unsigned int mask;
} mt7688_mux[] = {
	{
		.name = "i2c",
		.func = { "i2c", "gpio", NULL, NULL },
		.shift = 20,
		.mask = 0x3,
	}, {
		.name = "uart0",
		.func = { "uart", "gpio", NULL, NULL },
		.shift = 8,
		.mask = 0x3,
	}, {
		.name = "uart1",
		.func = { "uart", "gpio", NULL, NULL },
		.shift = 24,
		.mask = 0x3,
	}, {
		.name = "uart2",
		.func = { "uart", "gpio", "pwm", NULL },
		.shift = 26,
		.mask = 0x3,
	}, {
		.name = "pwm0",
		.func = { "pwm", "gpio", NULL, NULL },
		.shift = 28,
		.mask = 0x3,
	}, {
		.name = "pwm1",
		.func = { "pwm", "gpio", NULL, NULL },
		.shift = 30,
		.mask = 0x3,
	}, {
		.name = "refclk",
		.func = { "refclk", "gpio", NULL, NULL },
		.shift = 18,
		.mask = 0x1,
	}, {
		.name = "spi_s",
		.func = { "spi_s", "gpio", NULL, NULL },
		.shift = 2,
		.mask = 0x3,
	}, {
		.name = "spi_cs1",
		.func = { "spi_cs1", "gpio", NULL, "refclk" },
		.shift = 4,
		.mask = 0x3,
	}, {
		.name = "i2s",
		.func = { "i2s", "gpio", "pcm", NULL },
		.shift = 6,
		.mask = 0x3,
	}, {
		.name = "ephy",
		.func = { "ephy", "gpio", NULL, NULL },
		.shift = 34,
		.mask = 0x3,
	}, {
		.name = "wled",
		.func = { "wled", "gpio", NULL, NULL },
		.shift = 32,
		.mask = 0x3,
	}
};


#endif // _OMEGA2_CTRL_TYPES_H_