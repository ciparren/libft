/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:45:33 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/16 11:03:21 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'c';
	printf("Resultado custom: %c\n", ft_toupper(c));
	printf("Resultado custom: %c\n", toupper(c));
	return (0);
}
*/
