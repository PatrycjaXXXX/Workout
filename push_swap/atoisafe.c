#include <limits.h>

int	ft_atoi_safe(const char *nptr, int *number)
{
	int	i;
	int	nb;
	int	sign;
	int	digit;

	i = 0;
	nb = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		digit = nptr[i] - '0';
		
		// Check for overflow before performing the multiplication and addition
		if (sign == 1)
		{
			if (nb > (INT_MAX - digit) / 10)
				return (FAIL);
		}
		else
		{
			if (nb > (INT_MAX - digit) / 10)
				return (FAIL);
		}
		
		nb = nb * 10 + digit;
		i++;
	}
	
	// Apply sign and check final bounds
	if (sign == -1)
	{
		if (nb > (unsigned int)INT_MAX + 1)
			return (FAIL);
		*number = -nb;
	}
	else
	{
		*number = nb;
	}
	
	return (SUCCESS);
}