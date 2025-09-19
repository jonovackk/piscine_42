/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:11:27 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/26 08:18:21 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "strAwberry";
	s2 = "strAwberry";
	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("stringcmp: %d", ft_strcmp(s1, s2));
}
*/
