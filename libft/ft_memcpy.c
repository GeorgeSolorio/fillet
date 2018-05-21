/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:08:39 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/23 14:24:23 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = -1;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (++i < n)
		*(dest2 + i) = *(src2 + i);
	return (dest2);
}
