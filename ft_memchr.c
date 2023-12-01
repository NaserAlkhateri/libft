/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Naser\\ <Naser\\@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:26:47 by Naser\\          #+#    #+#             */
/*   Updated: 2023/11/11 20:33:51 by Naser\\         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *) s;
	while (n > 0)
	{
		if ((unsigned char)c == *buff)
			return ((void *)buff);
		n--;
		buff++;
	}
	return (NULL);
}
