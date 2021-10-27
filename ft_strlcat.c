/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:24:42 by bgales            #+#    #+#             */
/*   Updated: 2021/10/26 22:36:18 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = ft_strlen(dst);
	if (i > dstsize)
		return (dstsize + ft_strlen(src));
	j = 0;
	while (src[c] && i + c  < dstsize - 1)
	{
		dst[i + j] = src[c];
		c++;
	}
	if (dstsize > 0)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
