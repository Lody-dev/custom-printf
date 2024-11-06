#include "lib_printf.h"

int main(void){
	ft_printf("----------------------------------\n");
	ft_printf("My custom printf: ");
	ft_printf("custom hexadecimal output: %X\n", -255);
	ft_printf("----------------------------------\n");
	ft_printf("Original  printf: ");
	printf("This is a hexadecimal: %X\n", -255);
	return(0);
}

