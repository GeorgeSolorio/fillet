/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:55:59 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:04:50 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	destl;
	size_t	srcl;
	size_t	i;
	int		j;

	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (size < destl + 1)
		return (srcl + size);
	if (size > destl + 1)
	{
		while (i < size - 1)
			*(dest + i++) = *(src + j++);
		*(dest + i) = '\0';
	}
	return (destl + srcl);
}
