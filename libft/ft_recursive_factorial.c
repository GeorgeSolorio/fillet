/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:24:58 by gsolorio          #+#    #+#             */
/*   Updated: 2018/03/17 16:35:35 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb > 1 && nb <= 12)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else
	{
		return (0);
	}
}
