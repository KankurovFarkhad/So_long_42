/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:26:02 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 19:26:03 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					znak;
	int					i;

	result = 0;
	znak = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || \
			*str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-')
		znak *= -1;
	if (*str == '-' || *str == '+')
		str++;
	i = -1;
	while (ft_isdigit(*(str + ++i)) && \
			result <= (unsigned long)__LONG_MAX__ + 1)
		result = result * 10 + *(str + i) - '0';
	if (result > (unsigned long)__LONG_MAX__ && znak == 1)
		return (-1);
	if (result > (unsigned long)__LONG_MAX__ + 1 && znak == -1)
		return (0);
	return (result * znak);
}
