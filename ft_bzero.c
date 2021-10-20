/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:56:05 by bgales            #+#    #+#             */
/*   Updated: 2021/10/20 15:47:46 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
void ft_bzero(void* s, size_t n)
{
    int i;
    char *str;
    
    i = 0;
    str = s;
    
    if(n == 0)
        return ;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
    str[++i] = '\0';
}
