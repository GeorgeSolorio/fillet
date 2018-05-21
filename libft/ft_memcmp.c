/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:27:00 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:27:02 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char chr1;
	unsigned char chr2;

	while (n--)
	{
		chr1 = *(unsigned char *)s1;
		chr2 = *(unsigned char *)s2;
		if (chr1 != chr2)
			return (chr1 - chr2);
		s1++;
		s2++;
	}
	return (0);
}
