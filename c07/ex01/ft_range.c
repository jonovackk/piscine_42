/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:43:56 by jnovack           #+#    #+#             */
/*   Updated: 2024/08/01 11:18:40 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int *) malloc(sizeof(int) * (i));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_range(1, 10);
	i = 0;
	while (i < 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
