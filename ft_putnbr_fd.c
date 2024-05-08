/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:44:09 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/23 01:27:19 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	un;

	un = (unsigned int)nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		un = (unsigned int)(-1 * nb);
	}
	if (un > 9)
	{
		ft_putnbr_fd(un / 10, fd);
		ft_putchar_fd('0' + un % 10, fd);
	}
	else
		ft_putchar_fd('0' + un, fd);
}
