/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 14:55:25 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/22 15:00:49 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int	isup;

	isup = c;
	if (c >= 65 && c <= 90)
	{
		isup = c + 32;
		return (isup);
	}
	return (isup);
}
