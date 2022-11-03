/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:42:09 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/03 02:29:33 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	ft_bzero() erases the data in the n bytes of the memory starting at 
	the location pointed to by s, by writing zeros (bytes containing '\0') 
	to that area.

*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
