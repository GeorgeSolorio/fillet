/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:22:27 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:23:22 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*ndl;

	ndl = needle;
	if (*ndl == '\0')
		return ((char *)haystack);
	while (len--)
	{
		if (*ndl == *haystack)
			ndl++;
		else
		{
			haystack -= (ndl - needle);
			len += (ndl - needle);
			ndl = needle;
		}
		haystack++;
		if (*ndl == '\0')
			return ((char *)haystack - (ndl - needle));
		if (*haystack == '\0')
			break ;
	}
	return (NULL);
}
