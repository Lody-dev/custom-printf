#include "lib_printf.h"
int original_count = 999;
int custom_count = 999;
 int x = 42;
 int *ptr = &x;
int main(void){
	custom_count = ft_printf("Hello %p\n", ptr);
	original_count = printf("Hello %p\n", ptr);
	
	ft_printf("Original count = %d\nCustom count = %d\n", original_count, custom_count);

	return(0);
}

