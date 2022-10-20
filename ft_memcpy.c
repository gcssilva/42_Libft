/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:48:08 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/20 08:00:46 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tempd;
	char	*temps;

	if (!dest && !src)
		return (NULL);
	tempd = (char *)dest;
	temps = (char *)src;
	while (n-- > 0)
		tempd[n] = temps[n];
	return (dest);
}
