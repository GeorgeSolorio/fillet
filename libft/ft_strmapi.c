/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:17:20 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:28:17 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	char	*nstr;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	nstr = ft_strnew(l);
	if (!nstr)
		return (NULL);
	l = -1;
	while (*(s + ++l))
		*(nstr + l) = f(l, *(s + l));
	return (nstr);
}
