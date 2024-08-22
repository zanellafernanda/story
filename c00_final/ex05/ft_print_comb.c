/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:41:48 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/10 16:38:57 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combination(int n1, int n2, int n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (!(n1 == '7' && n2 == '8' && n3 == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_print_combination(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
