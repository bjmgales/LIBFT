/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:59:05 by bgales            #+#    #+#             */
/*   Updated: 2021/10/27 16:06:53 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *botteDeFoin, const char *aiguille, size_t len)
{
	size_t	stopper;
	size_t	i;

	i = 0;
	stopper = 0;
	if (*aiguille == '\0' || ft_strlen(aiguille) == 0)
		return ((char *)(botteDeFoin));
	while ((*botteDeFoin) && (stopper < len))
	{
		while ((*botteDeFoin == aiguille[i]) && (stopper < len))
		{
			if (aiguille[i + 1] == '\0')
				return ((char *)(botteDeFoin - i));
			botteDeFoin++;
			i++;
			stopper++;
		}
		i = 0;
		stopper++;
		botteDeFoin++;
	}
	return (NULL);
}
