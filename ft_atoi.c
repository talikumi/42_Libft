/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:25:04 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 16:16:08 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_helper(const char *str, int sign)
{
	int				num;
	long long int	check_overflow;

	num = 0;
	check_overflow = num;
	while (ft_isdigit(*str))
	{
		if (check_overflow > 2147483647)
		{
			if (sign == -1)
				return (-2147483648);
			else
				return (2147483647);
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	if (str == NULL)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	return (ft_atoi_helper(str, sign));
}
