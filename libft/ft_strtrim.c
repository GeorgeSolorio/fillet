/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 13:03:38 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/09 14:40:33 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t min;
	size_t max;
	size_t len;

	if (s == NULL)
		return (NULL);
	max = ft_strlen(s);
	min = 0;
	while (s[min] != '\0' && (s[min] == ' ' ||
			s[min] == '\n' || s[min] == '\t'))
		min++;
	while (min < max && (s[max - 1] == ' ' ||
			s[max - 1] == '\n' || s[max - 1] == '\t'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
