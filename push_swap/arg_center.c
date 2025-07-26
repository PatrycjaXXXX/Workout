/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_center.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:09:14 by psmolich          #+#    #+#             */
/*   Updated: 2025/07/26 14:37:33 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_atoi_safe(const char *nptr, int *number)
{
	int	i;
	int	nb;
	int	sign;

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
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	*number = nb * sign;
	if (*number / sign == nb)
		return (SUCCESS);
	return (FAIL);
}

static int	check_arg(char **arg, int i)
{
	int	j;

	while (arg[i])
	{
		if (ft_strlen(arg[i]) > 11) //int min has 11 characters so everything longer is definietly not an int
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
			if (i != j && ft_strcmp(arg[i], arg[j]) == 0)
				return (FAIL);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

int	collect_arg(int ac, char **av, char **arg)//, t_list **stack_a)
{
	int		i;
	//t_list	new;

	if (ac == 2)
	{
		if (ft_strstr(av[1], "  ")) //check if there is no multiple spaces
			return (FAIL);
		arg = ft_split(av[1], ' ');
	}
	else
		arg = av;
	i = !(ac == 2);
	if (check_arg(arg, i) == FAIL)
		return (FAIL);
	int at = ft_atoi_safe(arg[i], &i);
	if (at == SUCCESS)
		ft_printf("%d", i);
	// while (arg[i])
	// {
	// 	i++;
	// }
	return (SUCCESS);
}
