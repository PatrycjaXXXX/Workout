/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:34:02 by psmolich          #+#    #+#             */
/*   Updated: 2025/07/21 14:47:22 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft/libft.h"
# include <limits.h>

int	record_arg(int ac, char **av, char **arg);
int	ft_atoi_safe(const char *nptr, int *number);
#endif