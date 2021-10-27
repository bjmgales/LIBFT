/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:23:32 by bgales            #+#    #+#             */
/*   Updated: 2021/10/26 21:53:52 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = malloc((strlen(s) + 1) * sizeof(char));
	if (cpy == (NULL))
		return (NULL);
	ft_strlcpy(cpy, s, ft_strlen(s));
	printf("%s\n", cpy);
	return (cpy);
}
