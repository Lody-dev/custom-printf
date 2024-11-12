#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_putchar(const char c);
int ft_putstr(const char *str);
int ft_putnbr(int nb);
int ft_puthex(unsigned int nb);
int ft_putbighex(unsigned int nb);
int ft_putptr(unsigned long ptr);
int ft_putunbr(unsigned int nb);
int main(void);

#endif
