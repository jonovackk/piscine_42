/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:04:22 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/25 13:13:23 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = 0;
	while ((str[x] && str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	while (str[x] && (str[x] == '+' || str[x] == '-'))
	{
		if (str[x] == '-')
			y *= -1;
		x++;
	}
	while (str[x] && (str[x] >= '0' && str[x] <= '9'))
	{
		z = (str[x] - '0') + (z * 10);
		x++;
	}
	return (z * y);
}
/*
//Example usage for testing
int main() {
    char str1[] = " ---+--+1234ab567";
    char str2[] = "    -123";
    char str3[] = "  +++--42";
    char str4[] = "42";
    char str5[] = " -+-42";
    
    printf("%d\n", ft_atoi(str1)); // Output should be -1234
    printf("%d\n", ft_atoi(str2)); // Output should be -123
    printf("%d\n", ft_atoi(str3)); // Output should be 42
    printf("%d\n", ft_atoi(str4)); // Output should be 42
    printf("%d\n", ft_atoi(str5)); // Output should be 42

    return 0;
}
*/
