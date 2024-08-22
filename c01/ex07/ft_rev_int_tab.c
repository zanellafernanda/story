/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:16:08 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/11 18:35:07 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	size;

	int	tab[] = {0, 1, 2, 3, 4 ,5};
	size = 6; 
	//size = sizeof(tab) / sizeof(tab[0])   //sizeof brings the value in bytes
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}*/
