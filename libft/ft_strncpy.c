/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:31:53 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:08:29 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			while (i < n)
				*(dest + i++) = '\0';
	return (dest);
}
