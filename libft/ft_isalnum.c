/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 12:22:06 by gsolorio          #+#    #+#             */
/*   Updated: 2018/04/23 14:29:52 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	int isal;
	int isad;

	isal = ft_isalpha(c);
	isad = ft_isdigit(c);
	if (isal == 1 || isad == 1)
		return (1);
	return (0);
}
