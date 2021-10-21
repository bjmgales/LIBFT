/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.frbgales>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:17:35 by bgales            #+#    #+#             */
/*   Updated: 2021/10/20 19:33:40 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void* ft_memmove(void* dst, const void *src, size_t len)
{

}
int main()
{
	char src[100] = "haha drole";
	char dest[15] = "dst";
	char src1[6] = "abcde";
	char dest1[6] = "abcde";

	//memmove(dest, src, 16);
	memcpy(dest1+2, src1, 3);
	printf("%s\n", dest1);

}
