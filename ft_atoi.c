/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:03:50 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 20:03:52 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *nptr)
{
	size_t				cont;
	int					signo;
	unsigned long int	result;

	cont = 0;
	signo = 1;
	result = 0;
	while ((nptr[cont] >= 9 && nptr[cont] <= 13) || nptr[cont] == 32)
		cont++;
	if (nptr[cont] == '-' || nptr[cont] == '+')
	{
		if (nptr[cont] == '-')
			signo = -1;
		cont++;
	}
	while (nptr[cont] >= '0' && nptr[cont] <= '9')
	{
		result = (result * 10) + (nptr[cont] - '0');
		cont++;
		if (result > 2147483647 && signo == 1)
			return (2147483647);
		if (result > 2147483648 && signo == -1)
			return (-2147483648);
	}
	return ((int)(result * signo));
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "42";
	s2 = "-42";
	char *s3 = "   123";      // Espacios
	char *s4 = "123a45";     // Letras después del número
	// Simplemente imprimimos lo que tu función devuelve
	printf("Entrada: '%s' -> Salida: %d\n", s1, ft_atoi(s1));
	printf("Entrada: '%s' -> Salida: %d\n", s2, ft_atoi(s2));
	printf("Entrada: '%s' -> Salida: %d\n", s3, ft_atoi(s3));
	printf("Entrada: '%s' -> Salida: %d\n", s4, ft_atoi(s4));
    
    // Simplemente imprimimos lo que tu función devuelve
	printf("Entrada: '%s' -> Salida: %d\n", s1, atoi(s1));
	printf("Entrada: '%s' -> Salida: %d\n", s2, atoi(s2));
	printf("Entrada: '%s' -> Salida: %d\n", s3, atoi(s3));
	printf("Entrada: '%s' -> Salida: %d\n", s4, atoi(s4));
	return (0);
}
    */
