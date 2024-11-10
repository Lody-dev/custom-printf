#include <unistd.h>
#include "lib_printf.h"

static void ft_puthexp(unsigned long long nb)
{
    if (nb >= 16)
        ft_puthex(nb / 16);

    unsigned long long digit = nb % 16;
    if (digit < 10)
        ft_putchar(digit + '0');  // '0' is the ASCII value 48
    else
        ft_putchar(digit - 10 + 'a');  // 'a' is the ASCII value 97
}

void ft_putptr(void *ptr)
{
    unsigned long long nb = (unsigned long long)ptr;
    write(1, "0x", 2);

    if (nb == 0)
        ft_putchar('0');
    else
        ft_puthexp(nb);
}
