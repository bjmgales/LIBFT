/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:30:56 by bgales            #+#    #+#             */
/*   Updated: 2021/10/22 18:11:10 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;
	char	*scpy;

	scpy = (void *)(s);
	counter = 0;
	while (scpy[counter] && counter < n)
	{
		if (scpy[counter] == c)
		{
			return (scpy + counter);
		}
		counter++;
	}
	return (NULL);
}
