#include "lib_printf.h"
int original_count = 999;
int custom_count = 999;
int main(void){
	custom_count = ft_printf("Hello %X%X%%%%%X\n", 0,1231,9213);
	original_count = printf("Hello %X%X%%%%%X\n", 0,1231,9213);
	
	ft_printf("Original count = %d\nCustom count = %d\n", original_count, custom_count);

	return(0);
}

