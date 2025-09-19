/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:12:10 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/30 12:39:51 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	digit;

	digit = 'P';
	if (n < 0)
	{
		digit = 'N';
	}
	write (1, &digit, 1);
}
/*
int	main(void)
{
	ft_is_negative(-45);
	return (0);
}*/
