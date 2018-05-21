/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:24:45 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/14 11:15:14 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int num)
{
	int		len;
	char	*str;

	len = 0;
	len = ft_nlen(num) + 1;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (num == -2147483648)
		num += 2000000000;
	if (num < 0)
		num *= -1;
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (str[0] == '0' && ft_strlen(str) > 1)
		str[0] = '-';
	if (str[0] == '-' && str[10] == '8'
		&& str[1] == '0')
		str[1] = '2';
	return (str);
}
