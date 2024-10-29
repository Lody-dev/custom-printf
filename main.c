#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *format, ...){
int i = 0;
va_list args;
	
	while (format[i] != '\0'){
	if (format[i] == '%'){
		i++;
		if (format[i] == 's')
			i++;
			write(1,"String found", 13);
	}
	write(1, &format[i], 1);
	i++;
	}
}

int main(void){
char *str = "Hola %s \n";

ft_printf(str);
return(0);
}
