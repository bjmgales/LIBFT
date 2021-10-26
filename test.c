/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:01:33 by bgales            #+#    #+#             */
/*   Updated: 2021/10/25 20:33:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*coucou(char *c)
{
	char	*b;

	b = "salut les amis";
	printf("%d\n", ft_strlen(b));
	ft_strlcpy(c, b, 15);
	return (c);
}

int	main(void)
{
	char	s[15]= "";
	char	*ptr;

	coucou(s);
	ptr = s;
	printf("%s", s);
}
