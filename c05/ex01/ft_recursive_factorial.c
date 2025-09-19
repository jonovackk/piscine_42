/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:49:32 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/26 09:55:40 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (!nb || nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main(void)
{
	printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
	printf("Factorial of 3: %d\n", ft_recursive_factorial(3));
	printf("Factorial of 5: %d\n", ft_recursive_factorial(5));

	return (0);
}*/
