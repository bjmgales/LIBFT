/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:20:50 by bgales            #+#    #+#             */
/*   Updated: 2021/10/21 13:57:21 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (dstsize < 1)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (c < dstsize - 1)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	while (src[i])
		i++;
	return (i);
}
