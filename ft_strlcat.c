/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:48:31 by gsilva            #+#    #+#             */
/*   Updated: 2022/08/14 12:04:02 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = ft_strlen(dst);
	len = i + ft_strlen(src);
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		*src++;
		i++;
	}
	dst[i] = 0;
	return (len);
}
