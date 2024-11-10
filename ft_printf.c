#include "lib_printf.h"

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
				ft_putunbr(va_arg (args,unsigned int));
			else if (format [i] == 'x')
				ft_puthex(va_arg(args,int));
			else if (format [i] == 'X')
				ft_putbighex(va_arg(args,int));
			else if (format[i] == 'p')
				ft_putptr(va_arg(args, void*));
			else if (format [i] == 'c')
				count += ft_putchar(va_arg(args,int));
			else if (format [i] == '%')
				write(1,"%",1);
		}
		else 
			write(1, &format[i], 1);
		i++;
		if (format[i] != '%')
			count++;
		
	}
va_end (args);
return (count);
}
