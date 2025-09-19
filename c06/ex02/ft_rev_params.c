/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:09:55 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/27 16:15:41 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc -1;
	while (i > 0)
	{
		ft_strlen(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
