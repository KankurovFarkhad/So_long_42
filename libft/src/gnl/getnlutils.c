/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnlutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:48:00 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/10 06:38:29 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*search_line(const char *s)
{
	size_t	g;

	g = 0;
	if (!s)
		return (0);
	while (s[g] != '\n')
	{
		if (!s[g])
			return (0);
		++g;
	}
	return ((char *)&s[g]);
}

char	*ft_strjoi(char *s1, char *s2)
{
	int		y;
	int		m;
	char	*t;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	t = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 2);
	if (!t)
		return (0);
	m = 0;
	y = 0;
	while (s1[m])
		t[y++] = s1[m++];
	m = 0;
	while (s2[m])
		t[y++] = s2[m++];
	t[y] = '\0';
	free(s1);
	return (t);
}

size_t	ft_strlen(const char *p)
{
	int	b;

	b = 0;
	while (p[b])
		b++;
	return (b);
}
