/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:35:21 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/13 17:19:29 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char    dest[] ="test";
	char    src[] = "Hello world";

	printf("Variable src: %s\n", src);
	printf("Variable dest before: '%s'\n", dest);

	ft_strcpy(dest, src);
	printf("Variable src after: %s\n", src);
	printf("Variable dest after pass src content to dest: %s\n" , dest);
	return (0);
}*/
