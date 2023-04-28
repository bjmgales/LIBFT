/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:43:17 by bgales            #+#    #+#             */
/*   Updated: 2021/10/28 21:26:36 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;
	int		total_len;

	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	tmp = malloc((total_len + 1) * sizeof(char));
	if (tmp == (NULL))
		return (NULL);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		tmp[i++] = s2[j++];
	tmp[i] = '\0';
	return (tmp);
}
