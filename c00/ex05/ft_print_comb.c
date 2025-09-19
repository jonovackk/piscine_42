/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:01:03 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/12 11:20:36 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	l;
	char	m;
	char	n;

	n = '0';
	while (n <= '7')
	{
		m = n + 1;
		while (m <= '8')
		{
			l = m + 1;
			while (l <= '9')
			{
				write(1, &n, 1);
				write(1, &m, 1);
				write(1, &l, 1);
				if (n != '7')
					write(1, ", ", 2);
				l++;
			}
			m++;
		}
		n++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return 0;
}
*/
