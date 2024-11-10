#include "lib_printf.h"

int    ft_putchar(const char c) {
        write(1, &c, 1);
	return(1);
}

