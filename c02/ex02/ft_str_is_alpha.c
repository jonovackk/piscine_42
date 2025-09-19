/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:13:35 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/22 09:06:16 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		c = *str;
		if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && c != 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(int argc, char** argv)
{
	printf("Testing string: %s\n", argv[1]);
	printf("Result: %d\n", ft_str_is_alpha(argv[1]));
}*/
