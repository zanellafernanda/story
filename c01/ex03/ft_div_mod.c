/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:41:54 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/11 19:09:52 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = 5;
	d = 3;
	ft_div_mod(c, d, &div, &mod);
	printf("Valor divisao:%d\nValor do modulo:%d\n", div, mod);
	return (0);
}*/
