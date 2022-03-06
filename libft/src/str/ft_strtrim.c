/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:32 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 19:25:33 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*tmp;
	size_t	i;

	if (s1 == ((void *)0) || set == ((void *)0))
		return ((void *)0);
	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + i)) && i < len)
		i++;
	while (ft_strrchr(set, *(s1 + len)) && len > i)
		len--;
	tmp = ft_substr(s1, i, len - i + 1);
	return (tmp);
}
