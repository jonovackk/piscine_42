/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:51:41 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/16 17:06:21 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(size -1) - i];
		tab[(size - 1) - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
		int	tab[5] = {1, 2, 3, 4, 5};
		int	i;

		i = 0;
		ft_rev_int_tab(tab, 5);
		while (i < 5)
		{
			printf("%d ", tab[i]);
			i++;
		}
		return (0);
	}
*/
