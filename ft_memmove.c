/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:17:35 by bgales            #+#    #+#             */
/*   Updated: 2021/10/23 17:15:22 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp1;
	char	*tmp2;

	i = 0;
	tmp1 = dst;
	tmp2 = (char *)src;
	if (len == 0)
		return (dst);
	while (i < len)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	dst = tmp1;
	return (tmp1);
}
