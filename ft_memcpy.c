/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:29:58 by bgales            #+#    #+#             */
/*   Updated: 2021/10/20 16:40:52 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void* ft_memcpy(void* dst, const void* src, size_t n)
{
    int i;
    char* dest;
    
    i = 0;
    dest = dst;

    if (n ==0)
        return (dest);
    while (i < n)
    {    
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return dest;
}
