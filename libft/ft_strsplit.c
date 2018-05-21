/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 13:54:15 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/09 14:41:29 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

unsigned int	ft_cword(const char *s, char c)
{
	int	cnt;
	int	substrn;

	cnt = 0;
	substrn = 0;
	while (*s != '\0')
	{
		if (substrn == 1 && *s == c)
			substrn = 0;
		if (substrn == 0 && *s != c)
		{
			substrn = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

unsigned int	ft_wlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	nb_word = ft_cword(s, c);
	t = (char **)malloc(sizeof(*t) * (ft_cword(s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub(s, 0, ft_wlen(s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
