/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:15:29 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/23 14:26:20 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t len;

	len = ft_strlen(src);
	ft_memcpy(dest, src, len);
	dest[len] = '\0';
	return (dest);
}
