/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:21:14 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:21:21 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*nstr;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (len <= 0)
		return (NULL);
	nstr = ft_strnew(len);
	if (nstr == NULL)
		return (NULL);
	len = -1;
	while (*(s + ++len))
		*(nstr + len) = f(*(s + len));
	return (nstr);
}
