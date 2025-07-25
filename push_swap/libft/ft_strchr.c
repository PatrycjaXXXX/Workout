/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:54:47 by psmolich          #+#    #+#             */
/*   Updated: 2025/05/24 12:16:12 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	d;

	d = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *)(s + i));
		i++;
	}
	if (d == 0)
		return ((char *)(s + i));
	return ((void *)0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s[] = "tripouille";
// 	printf("%p\n", ft_strchr(s, 't' + 256));
// 	printf("%p\n", strchr(s, 't' + 256));
// 	printf("%p\n", ft_strchr(s, 't'));
// 	printf("%p\n", strchr(s, 't'));
// 	//this shows that c needs to be cast to unsigned char
// }