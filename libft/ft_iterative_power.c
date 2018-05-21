/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 17:41:15 by gsolorio          #+#    #+#             */
/*   Updated: 2018/03/17 17:52:01 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (nb >= 1 && power >= 1)
	{
		while (power > 1)
		{
			nb = nb * i;
			power--;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}
