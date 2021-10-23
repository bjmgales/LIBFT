/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:07:49 by bgales            #+#    #+#             */
/*   Updated: 2021/10/22 14:28:40 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (*s)
	{
		index++;
		s++;
	}
	while (index != -1)
	{
		if (*s == c)
			return ((char *)(s));
		s--;
		index --;
	}
	return (NULL);
}
