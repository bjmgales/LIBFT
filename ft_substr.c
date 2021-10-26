/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:51:34 by bgales            #+#    #+#             */
/*   Updated: 2021/10/26 16:42:13 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;

	if (s == NULL)
		return(ft_strdup(""));
	tmp = malloc(len + 1);
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}
