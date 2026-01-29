/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:45:33 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/16 11:06:45 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_tolower(int c)
{
	 if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
}

/*
int	main(void)
{
	char	c;

	c = 'C';
	printf("Resultado custom: %c\n", ft_tolower(c));
	printf("Resultado custom: %c\n", tolower(c));
	return (0);
}

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else
		return (c);
}
*/