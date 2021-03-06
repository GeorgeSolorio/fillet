/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 11:32:50 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/23 14:33:33 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	int upper;
	int lower;

	upper = 0;
	lower = 0;
	if (c >= 65 && c <= 90)
		upper = 1;
	if (c >= 97 && c <= 122)
		lower = 1;
	if (lower == 1 || upper == 1)
		return (1);
	return (0);
}
