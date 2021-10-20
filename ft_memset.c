/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:03:18 by bgales            #+#    #+#             */
/*   Updated: 2021/10/20 13:51:37 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void* ft_memset(void* b, int c, size_t len)
{
    int count;
    char* str;
    
    str = b;
    count = 0;

    while (count < len)
    {
        str[count] = c;
        count++;
    }
    return b;
}