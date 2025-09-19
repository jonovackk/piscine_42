/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:43:04 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/24 13:52:05 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	while (dest[count])
		count++;
	i = 0;
	while (src[i])
	{
		dest[count] = src[i];
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
	printf("strcat: %s\n", ft_strcat(dest, src));
	return (0);
}
*/
