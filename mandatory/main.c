/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:39:43 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/08 10:11:15 by ohakon           ###   ########.fr       */
/*                          scrot                                                  */
/* ************************************************************************** */

#include "so_long.h"

int main()
{
	t_mapdata map;
	t_mapdata *map_p = &map;
	char *str;
	int fd;
	int i;
	int f;

	fd = open("./maps/map.ber", O_RDONLY);
	if (fd < 0)
		ft_errors("Error: cannot open file\n");
	i = 0;
	f = 0;
	while((str = (get_next_line(fd))))
	{
		map_p->linecounter = ++i;
		if (f == 0)
		{
			map_p->lenline = ft_strlen(str);
			f = 1;
			if (!ft_strvalid(str, 49))
				ft_errors("Error: the map is not surrounded by a fence\n");
		}
		if(ft_strlen(str) != map_p->lenline)
			ft_errors("Error: map isn't rectangle\n");
		printf("%c", str[1]);
		if(f == 1)
		{
			if(str[0] != 49 && (ft_strlen(str) - 1) != 49)
				ft_errors("Error: the map is not surrounded by a fence\n");
		}
	}
}
	// gnl(fd, &str);
