/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:07:21 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/22 18:08:48 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(-2, 3));
	return (0);
}*/
