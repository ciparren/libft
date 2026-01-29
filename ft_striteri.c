/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:22:34 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/28 19:42:49 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	size_t	len;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		f(i, s[i]);
		i++; 
	}
	s[i] = '\0';
	return (s);
}
