/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:01:38 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/08 21:21:39 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return (0);
	if (ap != NULL && *ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
	return (*ap);
}
