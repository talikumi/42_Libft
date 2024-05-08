/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:09:51 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 15:52:19 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	uc;

	uc = (unsigned char)c;
	last = NULL;
	if (s == NULL)
		return (NULL);
	if (uc == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == uc)
			last = (char *)s;
		s++;
	}
	return (last);
}
