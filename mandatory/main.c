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
	// int flag;

	fd = open("./maps/map.ber", O_RDONLY);
	if (fd < 0)
		ft_errors("Error: cannot open file\n");
	i = 0;
	// flag = 0;
	// str = malloc(sizeof(char) * 5);
	str = malloc(sizeof(char) * (ft_strlen((getnl(fd)))*8));
	while(i < 5)
	{

		str = ft_strjoin(str,getnl(fd));
		map_p->linecounter = ++i;
		printf("%s",str);
		// if (flag == 0)
		// {
		// 	flag = 1;
		// 	map_p->lenline = ft_strlen(str);
		// 	printf("%ld\n", map_p->lenline);
		// 	printf("%s", str);
		// 	if (!ft_strvalid(str, 49))
		// 		ft_errors("Error: the map is not surrounded by a fence1\n");
		// }
		// if(ft_strlen(str) != map_p->lenline)
		// 	ft_errors("Error: map isn't rectangle\n");
		// if(flag == 1)
		// {
		// 	if(str[0] != 49 && str[(ft_strlen(str) - 1)] != 49)
		// 		ft_errors("Error: the map is not surrounded by a fence2\n");
		// }
		// free(str);

	}
	// free(str);

}
	// gnl(fd, &str);
