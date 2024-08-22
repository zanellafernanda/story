/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:11:57 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/19 19:14:07 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}
/*
int	main(void)
{
	char	dest[] = "";
	char	src[] = "teste";
	int	n = 20;

	printf("%s", ft_strncat(dest, src, n));
	return (0);
}*/
