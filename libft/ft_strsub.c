/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:23:52 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/09 14:39:04 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*substr;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	substr = ft_strnew(len);
	if (substr == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (ft_isascii(s[start]) == 0)
		return (0);
	if (len > slen)
		return (0);
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
