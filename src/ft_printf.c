#include "ft_printf.h"

int ft_printf(const char *format, ...){
int i = 0;
int count = 0;

va_list args;
	
va_start(args, format);
	
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				count += ft_putstr(va_arg(args,char *));
			else if (format [i] == 'd' || format [i] == 'i')
				count += ft_putnbr(va_arg (args,int));
			else if (format [i] == 'u')
				count += ft_putunbr(va_arg (args,unsigned int));
			else if (format [i] == 'x')
				count += ft_puthex(va_arg(args,unsigned int));
			else if (format [i] == 'X')
				count += ft_putbighex(va_arg(args,unsigned int));
			else if (format[i] == 'p')
				count += ft_putptr(va_arg(args, unsigned long));
			else if (format [i] == 'c')
				count += ft_putchar(va_arg(args,int));
			else if (format [i] == '%')
			{
				count++;
				write(1,"%",1);
			}
		}
		else 
			count += ft_putchar(format[i]);
		i++;
	}
va_end (args);
return (count);
}
