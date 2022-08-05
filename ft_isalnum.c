/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:31:37 by gsilva            #+#    #+#             */
/*   Updated: 2022/07/30 00:15:10 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) > 0 || ft_isdigit(c) > 0)
		return (1);
	return (0);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(int ac, char **av)
{
	if (ac = 2)
		printf("meu isalnum: %d\nisalnum original: %d\n",
			ft_isalnum(av[1][0]), isalnum(av[1][0]));
}*/