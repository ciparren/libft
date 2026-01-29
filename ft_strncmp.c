/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:16:30 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/16 12:16:34 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

    s1 = "Academia";
    s2 = "Holi";
    printf("Resultado custom: <%d> \n", ft_strncmp(s1, s2, 4));
    printf("Resultado oficial: <%d> \n", strncmp(s1, s2, 4));
    return (0);
}
    // 0 si s1 y s2 sson iguales
    // negativo s s1 < s2
    // positivo si s1 > s2
*/