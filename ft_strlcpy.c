/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 10:57:45 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 15:47:19 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	str_len = 0;
	while (src[str_len] != '\0')
	{
		if (i < dstsize - 1 && dstsize > 1)
		{
			dst[i] = src[i];
			i++;
		}
		str_len++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (str_len);
}
