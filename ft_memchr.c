/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:55:53 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/21 20:26:05 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*obj;

	i = 0;
	obj = (char *)s;
	while (i < n)
	{
		if (obj[i] == (char)c)
			return (&obj[i]);
		i++;
	}
	return (0);
}
