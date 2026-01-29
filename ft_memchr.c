/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:42:07 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 20:03:15 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*ptr;
	size_t			i;

	uc = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == uc)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
 int	main(void)
{
	int	s[5];

	s[5] = {1,2,3,4,5};
	//char c  = 'e';
	printf("Resultado custom: <%d> \n", (char *)ft_memchr(s,  2, 4));
	//char *t = "Hoola me llamo";
	printf("Resultado oficial: <%d> \n", (char *)memchr(s, 4, 4));
	return (0);
}
*/
