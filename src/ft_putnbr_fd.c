#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int truncate;
	int called;

	called = 0;
	truncate = 1000000000;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nb %= 1000000000;
		}
		nb *= -1;
	}
	while (truncate > 0)
	{
		if ((nb / truncate) != 0 || called == 1 || (nb == 0 && truncate == 1))
		{
			called = 1;
			ft_putchar_fd((nb / truncate) + '0', fd);
		}
		nb %= truncate;
		truncate /= 10;
	}
}