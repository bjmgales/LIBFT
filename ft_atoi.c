/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:27:38 by bgales            #+#    #+#             */
/*   Updated: 2021/11/01 19:20:36 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	signe;
	int	resultat;
	int	i;

	i = 0;
	signe = 1;
	resultat = 0;
	if ((str[0] == '-') || (str[0] == '+'))
	{
		i++;
		if (str[0] == '-')
			signe = -1;
	}
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		resultat = (resultat * 10) + (str[i] - 48);
		i++;
	}
	return (resultat * signe);
}
