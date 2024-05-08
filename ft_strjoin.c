/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:32:04 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 15:40:45 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(ft_strlen(s1) + 1 + ft_strlen(s2));
	if (!s1 || !s2 || !(res))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i++])
		res[i - 1] = s1[i - 1];
	while (s2[j++])
		res[i + j - 2] = s2[j - 1];
	res[i + j - 2] = 0;
	return (res);
}
