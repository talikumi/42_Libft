/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:10:34 by ntozzi            #+#    #+#             */
/*   Updated: 2021/01/27 11:27:54 by ntozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	if (!*haystack && !*needle)
		return ("");
	while (*haystack)
	{
		if (l < ft_strlen(needle))
			break ;
		if (ft_strlen(haystack) < ft_strlen(needle))
			break ;
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		l--;
		haystack++;
	}
	return (NULL);
}
