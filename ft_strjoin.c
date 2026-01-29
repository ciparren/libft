/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:04:53 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 22:04:54 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	lens1;
	size_t	lens2;
	size_t	cont;
	size_t	i;

	i = 0;
	cont = 0;
	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	res = malloc((sizeof(char) * (lens1 + lens2)) + 1);
	if (!res)
		return (NULL);
	while (cont < lens1)
	{
		res[cont] = s1[cont];
		cont++;
	}
	while (cont < (lens1 + lens2))
	{
		res[cont] = s2[i];
		cont++;
		i++;
	}
	res[cont] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*res;

    s1 = "Albus Percival ";
    s2 = "Wulfric Brian Dumbledore.";
    res = ft_strjoin(s1, s2);
    printf("Resultado: %s\n", res);
 
    free(res);
    return (0);
}
*/