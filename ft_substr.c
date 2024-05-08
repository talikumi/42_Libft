/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:31:04 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 15:56:06 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*substr;
	unsigned int	str_len;

	i = 0;
	str_len = ft_strlen(s);
	if (!s || start < 0 || len < 0)
		return (NULL);
	if (str_len == 0 || len == 0 || start >= str_len)
		return (ft_strdup(""));
	if (start + len > str_len)
		len = str_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
