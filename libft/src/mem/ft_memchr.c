/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:23:03 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 19:23:04 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp_c;
	unsigned char	*tmp_s;
	size_t			i;

	tmp_c = (unsigned char)c;
	tmp_s = (unsigned char *)s;
	i = -1;
	while (++i < n)
	{
		if (tmp_c == *tmp_s)
			return ((void *)tmp_s);
		tmp_s++;
	}
	return ((void *)0);
}
