/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:18:49 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/18 14:11:06 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
void ft_putnbr(int n)
{
    char c;
    if (n == 0)
        return;
    ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    int x = 4;
    int y = 2;

    // Exibindo os valores originais
    write(1, "Valores originais: x = ", 24);
    ft_putnbr(x);
    write(1, ", y = ", 6);
    ft_putnbr(y);
    write(1, "\n", 1);

    // Trocando os valores usando ft_swap
    ft_swap(&x, &y);

    // Exibindo os valores trocados
    write(1, "Valores trocados: x = ", 23);
    ft_putnbr(x);
    write(1, ", y = ", 6);
    ft_putnbr(y);
    write(1, "\n", 1);

    return 0;
}*/
