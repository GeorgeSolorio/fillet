/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:11:20 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:11:33 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*set;

	set = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (*(set + i) == chr)
			return ((unsigned char*)(set + i));
		i++;
	}
	return (NULL);
}
