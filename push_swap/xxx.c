#include "libft/libft.h"

int	check_arg(char **arg)
{
	int	i;
	int	j;

	i = 0;
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (!ft_isdigit(arg[i][j]))
				return (FAIL);
			j++;
		}
		j = 0;
		while (arg[j])
		{
			if (ft_strcmp(arg[i], arg[j]) == 0 && i != j)
				return (FAIL);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

int	main(void)
{
	char **arg = {"12", "1", "12"};
	if (check_arg(arg) == FAIL)
		ft_printf("FAIL");
	else
		ft_printf("SUCCESS");
}