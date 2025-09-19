/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:23:04 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/26 09:55:28 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb == 0)
		return (1);
	if (!nb)
		return (0);
	i = 1;
	result = nb;
	while (i != nb)
	{
		result *= (nb - i);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Factorial of 0: %d\n", ft_iterative_factorial(0));
	printf("Factorial of 2: %d\n", ft_iterative_factorial(2));
	printf("Factorial of 3: %d\n", ft_iterative_factorial(3));
	
	return (0);
}
*/
