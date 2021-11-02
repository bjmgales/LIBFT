/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:59:05 by bgales            #+#    #+#             */
/*   Updated: 2021/11/01 22:30:28 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	stopper;
	size_t	i;

	i = 0;
	stopper = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while ((*haystack != '\0') && (stopper < len))
	{
		while ((*haystack == needle[i]) && (stopper < len))
		{
			if (needle[i + 1] == '\0')
				return ((char *)(haystack - i));
			++i;
			printf("%d\n", i);
			++haystack;
			stopper++;
		}
		i = 0;
		stopper++;
		haystack++;
	}
	return (NULL);
}
