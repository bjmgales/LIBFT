/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:29:58 by bgales            #+#    #+#             */
/*   Updated: 2021/10/21 14:07:26 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (dst);
	while (i < n)
	{
		((unsigned char)*dst)[i] = ((unsigned char)*src)[i];
		i++;
	}
	return (dst);
}
