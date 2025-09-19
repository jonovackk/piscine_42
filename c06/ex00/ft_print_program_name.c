/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:55:28 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/27 16:10:41 by jnovack          ###   ########.fr       */
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
	if (argc == 1)
	{
		ft_strlen(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
