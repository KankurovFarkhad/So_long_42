/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:33:32 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/10 07:00:42 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cropping(char *st_string)
{
	int		i;
	int		b;
	char	*string2;

	i = 0;
	while (st_string[i] && st_string[i] != '\n')
		i++;
	if (!st_string[i])
	{
		free (st_string);
		return (0);
	}
	string2 = malloc (sizeof(char) * (ft_strlen(st_string) - i + 1));
	if (!string2)
		return (0);
	b = 0;
	i++;
	while (st_string[i])
	{
		string2[b++] = st_string[i++];
	}
	string2[b] = '\0';
	free(st_string);
	return (string2);
}

char	*output(char *st_string)
{
	int		y;
	char	*string2;

	y = 0;
	if (st_string[y] == '\0')
		return (0);
	while (st_string[y] && st_string[y] != '\n')
		y++;
	string2 = malloc(sizeof(char) * (y + 2));
	if (!string2)
		return (0);
	y = 0;
	while (st_string[y] && st_string[y] != '\n')
	{
		string2[y] = st_string[y];
		y++;
	}
	if (st_string[y] == '\n')
	{
		string2[y] = st_string[y];
		y++;
	}
	string2[y] = '\0';
	return (string2);
}

static char	*text(int fd, char *str)
{
	char	*buf;
	int		c;

	c = 1;
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (0);
	while (!search_line(str) && c != 0)
	{
		c = read(fd, buf, BUFFER_SIZE);
		if (c == -1 )
		{
			free(buf);
			return (NULL);
		}
		buf[c] = '\0';
		str = ft_strjoi(str, buf);
	}
	free(buf);
	return (str);
}

char	*getnl(int fd)
{
	char			*string2;
	static char		*st_string;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	st_string = text(fd, st_string);
	if (!st_string)
		return (0);
	string2 = output(st_string);
	st_string = cropping(st_string);
	return (string2);
}
