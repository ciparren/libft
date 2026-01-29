/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:15:23 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 20:02:16 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (last);
}
/*
int	main(void)
{
	char	*s;

	s = "Hoola me llamo";
	//char c  = 'e';
	printf("Resultado custom: <%s> \n", ft_strrchr(s, 'H'));
	//char *t = "Hoola me llamo";
	printf("Resultado oficial: <%s> \n", strrchr(s, 'H'));
	return (0);
}
*/
