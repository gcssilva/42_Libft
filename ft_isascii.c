/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:51:51 by gsilva            #+#    #+#             */
/*   Updated: 2022/07/30 00:03:40 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(void)
{
	printf("meu isascii: %d\nisascii original: %d\n", ft_isascii(), isascii());
}*/