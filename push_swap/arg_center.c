/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_center.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:09:14 by psmolich          #+#    #+#             */
/*   Updated: 2025/07/28 11:08:43 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "checker.h"

static int	check_value(const char *nptr, int *number)
{
	long	i;
	long	nb;
	long	sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	nb *= sign;
	if (((-2147483648) <= nb) && (nb <= 2147483647))
	{
		*number = (int)nb;
		return (SUCCESS);
	}
	return (FAIL);
}

static int	check_arg(char **arg, int i)
{
	int	j;

	ft_printf("check_arg");
	while (arg[i])
	{
		if (ft_strlen(arg[i]) > 11) //int min has 11 characters so everything longer is definietly not an int
			return (FAIL);
		j = 0;
		if (!(ft_isdigit(arg[i][0]) || arg[i][0] == '-' || arg[i][0] == '+'))
				return (FAIL);
		while (arg[i][++j])
			if (!ft_isdigit(arg[i][j]))
				return (FAIL);
		j = 0;
		while (arg[j])
		{
			if (i != j && ft_strcmp(arg[i], arg[j]) == 0)
				return (FAIL);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

int	record_arg(int ac, char **av, char **arg)//, t_list **stack_a)
{
	int	i;
	int	value;
	//t_list	new;

	if (ac == 2)
	{
		if (ft_strstr(av[1], "  ") || av[1][0] == '\0' || ft_strcmp(av[1], " ") == 0) //check for multiple spaces
			return (FAIL);
		arg = ft_split(av[1], ' ');
	}
	else
		arg = av;
	i = !(ac == 2);
	if (check_arg(arg, i) == FAIL)
		return (FAIL);
	value = 0;
	if (check_value(arg[i], &value) == FAIL)
		return (FAIL);
	ft_printf("%d", value);
	// while (arg[i])
	// {
	// 	i++;
	// }
	return (SUCCESS);
}
