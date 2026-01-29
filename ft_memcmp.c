/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:24:38 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/16 16:24:41 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s;
	char	*s2;

	s = "la me llamo";
    s2 = "kdldkhlkhjldhkd";
	//char c  = 'e';
	printf("Resultado custom: <%d> \n", ft_memcmp(s, s2, 5));
	//char *t = "Hoola me llamo";
	printf("Resultado oficial: <%d> \n", memcmp(s, s2, 5));
	return (0);
}
*/
