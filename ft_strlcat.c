/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:24:42 by bgales            #+#    #+#             */
/*   Updated: 2021/10/23 17:16:44 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total_len;

	i = 0;
	total_len = ft_strlen(src) + ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	while (i < dstsize - 1)
		dst[i++] = *src++;
	while (ft_strlen(dst) > i)
		i++;
	if (dstsize != 0 && ft_strlen(dst) <= dstsize)
		dst[i] = '\0';
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	return (total_len);
}
