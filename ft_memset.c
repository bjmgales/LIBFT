/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:03:18 by bgales            #+#    #+#             */
/*   Updated: 2021/10/19 18:51:24 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void* ft_memset(void* b, int c, size_t len)
{

}
int main()
{
    char dest[12] = "saluuuuuut";
    
    printf("%s\n", dest);
    printf("%s\n", memset(dest + 3, '.', 1 * sizeof(char)));
    printf("%s\n", dest);
}