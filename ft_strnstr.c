/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:48:44 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 20:20:58 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bcont;
	size_t	lcont;

	bcont = 0;
	lcont = 0;
	if (!little[0])
		return ((char *)big);
	while (big[bcont] != '\0' && bcont < len)
	{
		lcont = 0;
		while ((bcont + lcont) < len && big[bcont + lcont] == little[lcont])
		{
			lcont++;
			if (little[lcont] == '\0')
				return ((char *)&big[bcont]);
		}
		bcont++;
	}
	return (NULL);
}
