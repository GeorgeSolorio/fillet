/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 13:04:48 by gsolorio          #+#    #+#             */
/*   Updated: 2018/05/11 13:04:54 by gsolorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb > 1 && nb <= 12)
	{
		while (i <= nb)
		{
			j = i * j;
			i++;
		}
		nb = j;
		return (nb);
	}
	else
	{
		return (0);
	}
}
