/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:02:23 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/24 10:49:49 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	while (dest[count])
		count++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[count] = src [i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "World!";
	printf("dest: %s\n", src);
	printf("src: %s\n", dest);
	printf("strcat: %s\n", ft_strncat(dest, src, 3));
	return (0);
}*/
