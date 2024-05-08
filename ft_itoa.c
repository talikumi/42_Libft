/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:41:27 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 16:32:27 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_helper(int n, int len, int sign)
{
	long	nb;
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	nb = n;
	if (sign)
		nb = -nb;
	str[len] = '\0';
	len--;
	while (len)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	if (sign)
		str[len] = '-';
	else
		str[len] = nb % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int	len;
	int	sign;

	len = 0;
	if (n < 0)
		sign = 1;
	else
		sign = 0;
	len = ft_len(n);
	return (ft_itoa_helper(n, len, sign));
}
