/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:27:16 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/28 09:30:30 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t pos;
	size_t len;

	i = 0;
	pos = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		pos = 0;
		while (needle[pos] == haystack[i + pos])
		{
			pos++;
			if (needle[pos] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
