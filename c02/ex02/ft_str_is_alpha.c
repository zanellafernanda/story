/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:15:49 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/13 17:33:41 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	//int	is_uppercase;
	//int	is_lowercase;

	i = 0;
	//is_uppercase = (str[i++] >= 'A' && str[i] <= 'Z');
	//is_lowercase = (str[i++] >= 'a' && str[i] <= 'z');
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z')  && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "cHTRS";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
