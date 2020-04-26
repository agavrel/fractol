/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:33:10 by angavrel          #+#    #+#             */
/*   Updated: 2016/11/18 23:30:14 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int n, unsigned int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (n);
	else
		return (n * ft_pow(n, power - 1));
}
