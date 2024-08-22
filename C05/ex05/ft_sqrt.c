/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:08:13 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/22 19:22:17 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int n)
{
	int	a;
	int	b;

	b = n;
	if (n == 1)
		return (1);
	if (n <= 0)
		return (0);
	a = 2;
	while (a * a <= b)
	{
		if (a * a == b)
			return (a);
		a++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(25));
}*/
