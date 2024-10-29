#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void ft_putstr(char *str);

int ft_printf(const char *format, ...){
int i = 0;
va_list args;
	
	va_start( args, format);
	
	while (format[i] != '\0'){
	if (format[i] == '%'){
		i++;
		if (format[i] == 's')
			i++;
			ft_putstr(va_arg( args,  char * ));
	}
	write(1, &format[i], 1);
	i++;
	}
va_end (args);
return (i);
}

int main(void){
ft_printf("Hello, i am %s \n", "variatic argument");
return(0);
}
