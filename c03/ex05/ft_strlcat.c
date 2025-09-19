/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:18:57 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/23 08:43:01 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_str_length_fast(char *dest)
{
	int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*s;
	char			*src_start;
	unsigned int	dst_length;
	unsigned int	remaining;

	s = dest;
	src_start = src;
	remaining = size;
	while (remaining-- != 0 && *s != '\0')
		s++;
	dst_length = s - dest;
	remaining = size - dst_length;
	if (remaining == 0)
		return (dst_length + ft_str_length_fast(src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*s++ = *src;
			remaining--;
		}
		src++;
	}
	*s = '\0';
	return (dst_length + (src - src_start));
}
/*
int	main(void)
{
	char	*str = "World";
	char	dest[] = "Hello ";
#include <stdio.h>
	printf("function: %d\n", ft_strlcat(dest, str, 10));
	printf("dets: %s\n", dest);
}
*/
