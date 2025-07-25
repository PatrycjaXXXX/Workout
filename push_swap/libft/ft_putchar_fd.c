/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:45:19 by psmolich          #+#    #+#             */
/*   Updated: 2025/05/23 16:46:26 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the character ’c’ to the specified file
// descriptor.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
