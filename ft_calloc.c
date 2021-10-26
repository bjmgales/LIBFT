/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:47:11 by bgales            #+#    #+#             */
/*   Updated: 2021/10/25 13:22:36 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(size * count);
	if ((memory == NULL) || (!count || !size))
		return (NULL);
	ft_bzero(memory, size * count);
	return (memory);
}

int	main(void)
{
	int	*a;
	int	b;
	int	c;

	b = 0;
	c = 0;
	a = ft_calloc(0, 0);
	printf("%s\n", a);
	a = 1;
}
