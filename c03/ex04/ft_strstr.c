/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:12:26 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/22 19:18:34 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j ++;
		if (to_find[j] == 0)
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	src[] = "Hello World!";
	char	to_find[] = "llo";
	printf("dest: %s\n", src);
	printf("src: %s\n", to_find);
	printf("strcat: %s\n", ft_strstr(src, to_find));
	return (0);
}
*/
