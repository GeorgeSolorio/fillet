/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:20:37 by gsolorio          #+#    #+#             */
/*   Updated: 2018/03/17 19:13:23 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (nb >= 1 && power >= 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	else
	{
		return (0);
	}
}
