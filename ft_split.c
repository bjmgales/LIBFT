/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:21:10 by bgales            #+#    #+#             */
/*   Updated: 2021/10/31 15:53:31 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_of_elem(char const *s1, char c)
{
	size_t	i;
	size_t	nbrofelem;

	i = 0;
	nbrofelem = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
		{
			nbrofelem++;
			while (s1[i] == c)
			{
				i++;
			}
		}
		i++;
	}
	return (nbrofelem);
}

int	fullofc(const char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i] == c && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (1);
	i = 0;
	while (s1[i] != c && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (2);
	return (0);
}

char	**last_split(char **dest, char const *s1, char c)
{
	size_t	start;
	size_t	i;
	size_t	elem;

	i = 0;
	start = 0;
	elem = nbr_of_elem(s1, c);
	while (s1[i] != '\0')
	{
		while (s1[i] == c)
		{
			i++;
			start = i;
		}
		i++;
	}
	dest[elem] = (char *)malloc((i - start + 1) * sizeof(char));
	if (dest[elem] == (NULL))
		return (NULL);
	ft_strlcpy(dest[elem], s1 + start, (i - start) + 1);
	return (dest);
}

char	**first_splits(char **dest, char const *s1, char c)
{
	size_t	i;
	size_t	cfind;
	size_t	start;

	cfind = 0;
	i = 0;
	start = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
		{
			dest[cfind] = (char *)malloc((i - start + 1) * sizeof(char));
			if (dest[cfind] == (NULL))
				return (NULL);
			ft_strlcpy(dest[cfind], s1 + start, (i - start) + 1);
			start = i;
			cfind++;
			while (s1[i] == c)
				start = ++i;
		}
		i++;
	}
	last_split(dest, s1, c);
	return (dest);
}

char	**ft_split(char const *s1, char c)
{
	size_t		nbrofelem;
	char		**result;

	if (s1 == NULL)
		return (NULL);
	s1 = (const char *)ft_strtrim(s1, &c);
	nbrofelem = nbr_of_elem(s1, c);
	result = (char **)malloc((nbrofelem + 2) * sizeof(char *));
	result[nbrofelem + 1] = (NULL);
	if (fullofc(s1, c) == 1)
	{
		result[0] = (NULL);
		free((void *)(s1));
		return (result);
	}
	if (fullofc(s1, c) == 2)
	{
		result[0] = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
		ft_strlcpy(result[0], s1, ft_strlen(s1) + 1);
	}
	if (nbrofelem != 0)
		first_splits(result, s1, c);
	free((void *)(s1));
	return (result);
}
