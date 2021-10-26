/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:51:34 by bgales            #+#    #+#             */
/*   Updated: 2021/10/25 21:42:48 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}
