/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:50:02 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/26 09:56:21 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2³ = %d\n", ft_recursive_power(2, 3));
	printf("2⁻3 = %d\n", ft_recursive_power(2, -3));
	printf("7² = %d\n", ft_recursive_power(7, 2));

	return (0);
}
*/
