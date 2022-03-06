/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:39:36 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/06 01:23:57 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct t_mapdata
{
	int	size_y;
	int	size_x;
	int	playerpos_x;
	int	playerpos_y;
	int	score;
	int	currentscore;


}			t_mapdata;


#endif


