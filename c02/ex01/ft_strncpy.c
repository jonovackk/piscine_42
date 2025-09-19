/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:50:41 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/19 18:12:38 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char *src;
	char dest[0];

	src = "Hello, World!";
	printf("base : %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strncpy(dest, src, 13);
	printf("after copy: %s\n", dest);
}*/
