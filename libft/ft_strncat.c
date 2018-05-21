/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:45:18 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/28 09:34:26 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int			i;
	int			j;

	i = -1;
	j = (int)ft_strlen(dest);
	while (*(src + ++i) && i < (int)n)
		*(dest + j++) = *(src + i);
	*(dest + j) = '\0';
	return (dest);
}
