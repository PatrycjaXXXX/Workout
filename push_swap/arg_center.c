/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_center.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:09:14 by psmolich          #+#    #+#             */
/*   Updated: 2025/07/25 13:32:53 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	record_arg(int ac, char **av, char **arg, t_list **stack_a)
{
	int	i;

	if (ac == 2)
		arg = ft_split(av[1], " ");
	else
		arg = av;
	i = (ac > 2);
	if (check_arg == FAIL)
		return (FAIL);
	while (arg[i])
	{
		new = 
	}
	return (SUCCESS);
}