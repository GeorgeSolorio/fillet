/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:25:11 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/09 12:30:43 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	chr1;
	unsigned char	chr2;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0')
			&& (s2[i] != '\0') && (i < n))
		i++;
	if (i == n)
		i--;
	chr1 = (char)s1[i];
	chr2 = (char)s2[i];
	return (chr1 - chr2);
}
