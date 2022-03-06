/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:17 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 19:25:18 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while (!(!haystack && len == 0) && *haystack)
	{
		j = 0;
		while (*(needle + j) && i + j < len)
		{
			if (*(needle + j) == *(haystack + j))
				j++;
			else
			{
				j = 0;
				break ;
			}
		}
		if (*(needle + j) == '\0')
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return ((void *)0);
}
