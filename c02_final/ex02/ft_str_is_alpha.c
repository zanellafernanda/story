/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:15:49 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/14 15:13:30 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
	char str1[] = "HelloWorld";	// Alphabetic, should return 1
    	char str2[] = "Hello123";	// Not alphabetic, should return 0
    	char str3[] = "";		// Empty string, should return 1
    	char str4[] = "Hi!";		// Contain non alphabetic, should return 0
	
	printf("Test 1: %d\n", ft_str_is_alpha(str1)); // Expected output: 1
    	printf("Test 2: %d\n", ft_str_is_alpha(str2)); // Expected output: 0
    	printf("Test 3: %d\n", ft_str_is_alpha(str3)); // Expected output: 1
    	printf("Test 4: %d\n", ft_str_is_alpha(str4)); // Expected output: 0
	return (0);
}*/
