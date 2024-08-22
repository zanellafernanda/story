/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:12:58 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/19 18:56:54 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	result = (unsigned char)*s1 - (unsigned char)*s2;
	return (result);
}
/*
int	main(void)
{
	//0, if the s1 and s2 are equal;
	char s1[] = "ABC";
	char s2[] = "ABC";
	printf("Test Case 1: Comparing '%s' and '%s'\n",s1, s2);
	printf("Expeted 0, Got: %d\n", ft_strcmp(s1, s2));
	
	//a negative value if s3 is less than s4;
	char s3[] = "ABC"; 
	char s4[] = "AB";
	printf("Test Case 1: Comparing '%s' and '%s'\n",s3, s4);
	printf("Expeted Negative, Got: %d\n", ft_strcmp(s3, s4));
        
	//a positive value if s5 is less than s6;
        char s5[] = "ABA";
        char s6[] = "ABZ";
	printf("Test Case 1: Comparing '%s' and '%s'\n",s5, s6);
	printf("Expeted Negative, Got: %d\n", ft_strcmp(s5, s6));

	//a positive value if s7 is less than s8;
        char s7[] = "ABJ";
        char s8[] = "ABC";
        printf("Test Case 1: Comparing '%s' and '%s'\n",s7, s8);
        printf("Expeted Positive, Got: %d\n", ft_strcmp(s7, s8));

        char s9[] = "\201";
        char s10[] = "A";
        printf("Test Case 1: Comparing '%s' and '%s'\n",s9, s10);
        printf("Expeted Positive, Got: %d\n", ft_strcmp(s9, s10));

}*/
