/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzanella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:38:13 by fzanella          #+#    #+#             */
/*   Updated: 2024/08/21 23:27:36 by fzanella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = argc -1;
		while (i > 0)
		{
			putstr(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
