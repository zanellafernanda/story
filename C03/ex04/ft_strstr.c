/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:45:43 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/20 18:09:41 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*t;
	char	*s;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		t = to_find;
		s = str;
		while (*t != '\0' && *t == *s)
		{
			t++;
			s++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

int	main()
{
	char	str[] = "testo";
	char	to_find[] = "te";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
