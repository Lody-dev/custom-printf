#include "lib_printf.h"
int original_count = 999;
int custom_count = 999;
int main(void){
	custom_count = ft_printf("Hello %s%s%s\n", "wo","wo","wo");
	original_count = printf("Hello %s%s%s\n", "wo","wo","wo");
	
	ft_printf("Original count = %d\nCustom count = %d\n", original_count, custom_count);

	return(0);
}

