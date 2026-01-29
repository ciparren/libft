/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:09:12 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/16 11:09:15 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	uc;

	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == uc)  
            return ((char *)s);       
        s++;
	}
	if (uc == '\0')
        return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	*s;

	s = "Hoola me llamo";
	//char c  = 'e';
	printf("Resultado custom: <%s> \n", ft_strchr(s,  'z'));
	//char *t = "Hoola me llamo";
	printf("Resultado oficial: <%s> \n", strchr(s, 'z'));
	return (0);
}
*/