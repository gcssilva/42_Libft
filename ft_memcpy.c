/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:48:08 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/12 11:58:50 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tempd;
	char	*temps;

	tempd = (char *)dest;
	temps = (char *)src;
	while (n-- > 0)
		tempd[n] = temps[n];
	return (dest);
}
