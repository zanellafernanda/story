/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:09:38 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/22 18:51:46 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(-2, 3));
	return (0);
}*/
