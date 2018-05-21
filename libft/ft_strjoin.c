/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:28:41 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/09 14:49:43 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str = ft_strdup(s1);
	if (s2 == NULL)
		return (str);
	ft_strcat(str, s2);
	return (str);
}
