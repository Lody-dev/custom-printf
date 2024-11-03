#include "lib_printf.h"

int main(void){
	ft_printf("----------------------------------\n");
        ft_printf("My custom printf: ");
        ft_printf("%s, %s%c! This is a hexadecimal number %x\n", "Hello", "worl", 'd', 255);
	ft_printf("----------------------------------\n");
        ft_printf("Original  printf: ");
	printf("%s, %s%c! This is a hexadecimal number %x\n", "Hello", "worl", 'd', 255);
        return(0);
}

