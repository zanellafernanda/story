/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:08:05 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/11 19:11:43 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a;
	*a = *a / *b;
	*b = div % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Result of a:%d\nb:%d\n", a, b);
	return (0);
}*/
