/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:14:14 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/19 19:02:38 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
		{
			return ((unsigned)*s1 - (unsigned)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned)*s1 - (unsigned)*s2);
}
/*
int	main(void)
{
	int	n = 2;
	char s1[] = "geek";
	char s2[] = "Geek";
	printf("%d", ft_strncmp(s1, s2, n));
	
}*/
