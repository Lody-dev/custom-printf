#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
void ft_putchar(const char c);
void ft_putstr(const char *str);
void ft_putnbr(int nb);
void ft_puthex(unsigned int nb);
void ft_putbighex(unsigned int nb);
void ft_putunbr(unsigned int nb);
int main(void);

#endif
