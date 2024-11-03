#include "lib_printf.h"

int ft_printf(const char *format, ...){
int i = 0;

va_list args;
	
va_start(args, format);
	
	while (format[i] != '\0'){
	if (format[i] == '%'){
		i++;
		if (format[i] == 's'){
			i++;
			ft_putstr(va_arg(args,char *));
		}
		else if (format [i] == 'd'){
			i++;
			ft_putnbr(va_arg (args,int));
		}
		else if (format [i] == '%'){
			i++;
			write(1,"%",1);
		}
		else
			i++;
	}
	write(1, &format[i], 1);
	i++;
	}
va_end (args);
return (i);
}
