/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:30:31 by gsilva            #+#    #+#             */
/*   Updated: 2022/07/29 23:09:52 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	nbr;

	i = 0;
	s = 1;
	nbr = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * s);
}

/*#include<stdio.h>
#include<stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("meu atoi: %d\natoi original: %d\n", ft_atoi(av[1]), atoi(av[1]));
	}
}*/