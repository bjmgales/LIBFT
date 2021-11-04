/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 01:09:24 by bgales            #+#    #+#             */
/*   Updated: 2021/11/04 01:24:16 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst)
	{
		if (*alst)
		{
			while (*alst)
				*alst = new ->next;
			*alst = new;
		}
	}
	return ;
}
