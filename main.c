#include "lib_printf.h"

int main(void){
	char *lpd = "w"; 
	ft_printf("----------------------------------\n");
	ft_printf("My custom printf: ");
	ft_printf("Custom pointer output : %p\n", &lpd);
	ft_printf("----------------------------------\n");
	ft_printf("Original  printf: ");
	printf("This is a pointer: %p\n", &lpd);
	return(0);
}

