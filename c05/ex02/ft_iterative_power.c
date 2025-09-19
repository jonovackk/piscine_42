/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:02:47 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/26 09:55:54 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("2³ = %d\n", ft_iterative_power(2, 3));
	printf("0⁵ = %d\n", ft_iterative_power(0, 5));
	printf("2⁻3 = %d\n", ft_iterative_power(2, -3));
	printf("0⁰ = %d\n", ft_iterative_power(0, 0));
	return (0);
}
*/
