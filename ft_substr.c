/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:29:44 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 20:29:46 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	cont;
	size_t	lens;

	cont = 0;
	lens = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= lens)
	{
		res = malloc((sizeof(char) * (lens - start)) + 1);
		if(!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if(len > lens - start)
		len = lens - start;
	res = malloc((sizeof(char) * (len + 1)));
	if(!res)
		return (NULL);
	while (cont < len)
	{
		res[cont] = s[start + cont];
		cont++;
	}
	res[cont] = '\0';
	return (res);
}

/*
int	main(void)
{
	char	*s;
	char	*s1;

    s = "Albus Percival Wulfric Brian Dumbledore";
    s1 = "";
    printf("Resultado: %s\n", ft_substr(s, 29, 12));
    printf("Resultado: %s\n", ft_substr(s, 0, 5));
    printf("Resultado: %s\n", ft_substr(s1, 6, 8));
    printf("Resultado: %s\n", ft_substr(s, 29, 15));
    return (0);
}
    */
