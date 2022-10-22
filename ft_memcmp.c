/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:13:29 by zelhajou          #+#    #+#             */
/*   Updated: 2022/10/22 02:01:15 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*obj1;
	unsigned char	*obj2;

	i = 0;
	obj1 = (unsigned char *)s1;
	obj2 = (unsigned char *)s2;
	while (i < n)
	{
		if (obj1[i] != obj2[i])
			return (obj1[i] - obj2[i]);
		i++;
	}
	return (0);
}
