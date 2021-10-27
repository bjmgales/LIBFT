/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:17:35 by bgales            #+#    #+#             */
/*   Updated: 2021/10/26 21:47:22 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp1;
	char	*tmp2;

	i = 0;
	tmp1 = (char *)dst;
	tmp2 = (char *)src;
	if (len == 0)
		return (dst);
	while (i < len)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	i = 0;
	while (tmp1[i])
	{
		((char *)dst)[i] = tmp1[i];
		i++;
	}
	return (dst);
}
