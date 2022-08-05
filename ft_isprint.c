/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:39:16 by gsilva            #+#    #+#             */
/*   Updated: 2022/07/30 00:13:08 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(void)
{
	printf("meu isprint: %d\nisprint original: %d\n", ft_isprint(), isprint());
}*/