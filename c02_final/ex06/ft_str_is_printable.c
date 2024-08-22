/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:24:15 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/13 17:46:09 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	//char	str = 12;
	char	str[] = "test";
	if (ft_str_is_printable(str))
	{
		printf("Is a printable characters\n");
	}
	else
	{
		printf("Not a printable character\n");
	}
	return (0);
}*/
