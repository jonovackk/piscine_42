/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:15:41 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/26 09:56:40 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
int	main(void)
{
	printf("Fibonacci of 0 = %d\n", ft_fibonacci(0));
	printf("Fibonacci of 3 = %d\n", ft_fibonacci(3));
	printf("Fibonacci of -1 = %d\n", ft_fibonacci(-1));

	return (0);
}
*/
