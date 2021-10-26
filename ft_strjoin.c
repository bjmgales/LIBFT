/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:43:17 by bgales            #+#    #+#             */
/*   Updated: 2021/10/25 22:05:35 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;

	tmp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	tmp = ft_strdup(s1);
	printf("%s\n",tmp);
	i = ft_strlen(s1);
	/*while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		printf("lol");
		tmp[i] = *(char *)(s2);
		i++;
		s2++;
	}*/
	return (tmp);
}

int	main(void)
{
	printf("%s\n", ft_strjoin("salut", "hey"));
}
