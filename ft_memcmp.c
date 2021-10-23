/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:12:02 by bgales            #+#    #+#             */
/*   Updated: 2021/10/22 18:25:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;
	char	*s1tmp;
	char	*s2tmp;

	s1tmp = (void *)(s1);
	s2tmp = (void *)(s2);
	index = 0;
	while ((*s1tmp || *s2tmp) && (index < n))
	{
		if ((*s1tmp > *s2tmp) || (*s1tmp < *s2tmp))
			return ((int)(*s1tmp - *s2tmp));
		s1tmp++;
		s2tmp++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "za";
	s2 = "zx";
	printf("%d\n", ft_memcmp(s1, s2, 100));
	printf("%d\n", memcmp(s1, s2, 100));
}
