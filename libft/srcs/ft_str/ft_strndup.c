/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 18:22:54 by angavrel          #+#    #+#             */
/*   Updated: 2017/03/07 18:57:08 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	if (!(str = ft_strnew(n)))
		return (NULL);
	str = ft_strncpy(str, s, n);
	return (str);
}
