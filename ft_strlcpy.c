/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 09:27:19 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 20:27:38 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int main ()
{
	char	dst1[4];
	char	dst2[4];
	char	*src;
	size_t	ret;

	src = "Hola 42!";
	ret = ft_strlcpy(dst1, src, sizeof(dst1));
	printf("Resultado custom: '%s' | Retorno: %zu\n", dst1, ret);
	ret = strlcpy(dst2, src, sizeof(dst2));
	printf("Resultado oficial: '%s' | Retorno: %zu\n", dst2, ret);
	return (0);
}
*/
