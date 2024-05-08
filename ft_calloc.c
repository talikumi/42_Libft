/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:28:50 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 14:50:46 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = malloc(size * count);
	if (count == 0 || size == 0)
		return (NULL);
	if ((count * size) / count != size)
		return (NULL);
	if (!(new))
		return (NULL);
	if (count > UINTPTR_MAX / size)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
