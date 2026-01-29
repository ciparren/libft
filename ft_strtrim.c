/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:21:19 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 22:21:21 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenset;
	size_t	lens1;
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	
	lens1 = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = lens1;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}

/*
int	main(void)
{
	char	*s1;
	char	*set;

    s1 = "-.-.-----.Albus Percival-.-.-...-";
    set = ".-";
    printf("Resultado: %s\n", ft_strtrim(s1, set));
    return (0);
}
*/