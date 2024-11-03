#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void ft_putstr(const char *str);
void ft_putnbr(int nb);
int ft_printf(const char *format, ...);
int main(void);

#endif
