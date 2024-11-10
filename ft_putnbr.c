#include "lib_printf.h"

static int lenth_counter(int nb)
{
	int n;
	int i;

	n = nb;
	if (n == 0)
		return(1);
	i = 0;
	while (n)
	{
	n /= 10;
	i++;
	}
	return(i);
}

static void printer(int nb){
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) {
		printer(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar(nb + 48);

}

int	ft_putnbr(int nb) 
{
	int lenth;
	lenth = lenth_counter(nb);
	printer(nb);
	return(lenth);
}
