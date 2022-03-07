/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:39:43 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/07 07:55:03 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main()
{
	char *str;
	int fd;

	fd = open("./maps/map.ber", O_RDONLY);
	if (fd < 0)
		ft_errors("Error: cannot open file");
	
	gnl(fd, &str);
	printf("%s", str);



}
