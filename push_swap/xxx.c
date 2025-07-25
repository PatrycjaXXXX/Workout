#include "libft/libft.h"

int	check_arg(char **arg, int i)
{
	int	j;

	while (arg[i])
	{
		if (ft_strlen(arg[i]) > 11)
			return (FAIL);
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

int	main(int ac, char **av)
{
	int		i;
	char	**arg;

	if (ac == 2)
		arg = ft_split(av[1], ' ');
	else
		arg = av;
	i = (ac > 2);
	if (check_arg(arg, i) == FAIL)
		ft_printf("FAIL");
	else
		ft_printf("SUccess");
	return (SUCCESS);
}