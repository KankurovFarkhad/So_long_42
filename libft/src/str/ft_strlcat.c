/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:24:46 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 19:24:47 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*(dst + i) && i < dstsize)
		i++;
	while (*src && i + 1 < dstsize)
	{
		*(dst + i) = *src;
		i++;
		src++;
	}
	if (i < dstsize)
		*(dst + i) = '\0';
	return (i + ft_strlen(src));
}
