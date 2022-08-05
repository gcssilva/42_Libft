/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:26:58 by gsilva            #+#    #+#             */
/*   Updated: 2022/07/30 00:14:58 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(int ac, char **av)
{
	if (ac = 2)
		printf("meu isdigit: %d\nisdigit original: %d\n",
			ft_isdigit(av[1][0]), isdigit(av[1][0]));
}*/