#include "lib_printf.h"

int ft_putstr(const char *str){
int i = 0;
	
	while (str[i] != '\0'){
	write(1, &str[i],1);
	i++;
	}
return(i);
}
