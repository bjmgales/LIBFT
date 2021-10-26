/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:56:05 by bgales            #+#    #+#             */
/*   Updated: 2021/10/26 13:39:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = s;
	if (n > (ft_strlen(s) + 1))
		n = ft_strlen(s);
	if (n == 0)
		return ;
	ft_memset(tmp, 0, n);
}
