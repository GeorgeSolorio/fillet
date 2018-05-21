/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:28:19 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/24 13:39:22 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*set;
	size_t	length;

	length = ft_strlen(s) + 1;
	if (!(set = ft_memalloc(length)))
		return (NULL);
	ft_memcpy(set, s, length);
	set[length] = '\0';
	return (set);
}
