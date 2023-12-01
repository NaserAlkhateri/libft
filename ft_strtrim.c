/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Naser\\ <Naser\\@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:14:58 by Naser\\          #+#    #+#             */
/*   Updated: 2023/11/18 13:12:10 by Naser\\         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set_c(char c, char const *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static	int	start_index(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_set_c(s1[i], set))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*ret;
	size_t	end;

	if (!s1)
		return (NULL);
	s1 += start_index(s1, set);
	if (*s1 == '\0')
	{
		trimmed = (char *)malloc(1);
		if (!trimmed)
			return (NULL);
		*trimmed = 0;
		return (trimmed);
	}
	end = ft_strlen(s1) - 1;
	trimmed = ft_strdup(s1);
	if (!trimmed)
		return (NULL);
	while (end && is_set_c(trimmed[end], set))
		end--;
	trimmed[end + 1] = '\0';
	ret = ft_strdup(trimmed);
	free(trimmed);
	return (ret);
}
