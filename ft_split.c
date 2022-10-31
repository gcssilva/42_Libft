/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:24:43 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/18 09:33:22 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wl(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_wc(char *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = -1;
	if (s[0] != c && s[0] != 0)
		wc++;
	while (s[++i])
		if (s[i] == c && (s [i + 1]) != c && (s [i + 1]) != 0)
			wc++;
	return (wc);
}

static char	*ft_chrtrim(char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	size_t	wl;
	size_t	i;
	char	**split;

	if (!s)
		return (NULL);
	wc = ft_wc((char *)s, c);
	split = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < wc)
	{
		s = ft_chrtrim((char *)s, c);
		wl = ft_wl((char *)s, c);
		split[i] = ft_substr((char *)s, 0, wl);
		s = s + wl;
		i++;
	}
	split[i] = 0;
	return (split);
}
