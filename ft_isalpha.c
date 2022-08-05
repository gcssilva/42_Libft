/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:59:21 by gsilva            #+#    #+#             */
/*   Updated: 2022/07/30 00:14:32 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(int ac, char **av)
{
	if (ac = 2)
		printf("meu isalpha: %d\nisalpha original: %d\n",
			ft_isalpha(av[1][0]), isalpha(av[1][0]));
}*/