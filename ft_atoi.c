/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:27:38 by bgales            #+#    #+#             */
/*   Updated: 2021/10/26 12:20:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	signe;
	int	resultat;

	signe = 1;
	resultat = 0;
	if ((str[0] == '-') || (str[0] == '+'))
	{
		str++;
		if (str[0] == '-')
			signe *= -1;
	}
	while ((*str) && (*str >= 48 && *str <= 57))
	{
		resultat = (resultat * 10) + (*str - 48);
		str++;
	}
	return (resultat * signe);
}
