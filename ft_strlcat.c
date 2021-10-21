/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:14:14 by bgales            #+#    #+#             */
/*   Updated: 2021/10/21 14:52:46 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (*dst)
		dst++;
	while (i < dstsize - 1)
	{
		*dst++ = *src++;
		i++;
	}
}

int main()
{
	char dst[5] = "haha";
	char src[10] = "0123456789";
	char dst1[5] = "haha";
	char src1[10] = "0123456789";

	ft_strlcat(dst, src, 3);
	strlcat(dst1, src1, 3);
	printf("%s\n", dst);
	printf("%s\n", dst1);
}
