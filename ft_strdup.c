/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:23:32 by bgales            #+#    #+#             */
/*   Updated: 2021/10/25 22:14:24 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = malloc((strlen(s) + 1) * sizeof(char));
	ft_strlcpy(cpy, s, ft_strlen(s - 2));
	printf("%s\n", cpy);
	return (cpy);
}
int main()
{
	printf("%s", ft_strdup("salut"));
}
