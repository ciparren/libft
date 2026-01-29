/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:43:56 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/21 17:43:59 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	upper(unsigned int i, char c)
{
	
    if (c >= 'a' && c <= 'z')
    {   
        return (c - 32);	
    }
    return (c); // Si es impar, devolvemos el carácter tal cual
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	len;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(0, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "hola mundo";
	printf("Cadena original: %s\n", str);
	
	result = ft_strmapi(str, upper);
	if (result)
	{
		printf("Cadena modificada: %s\n", result);
		free(result); // ¡Importante! ft_strmapi usa malloc, así que liberamos.
	}
	else
	{
		printf("Error: Fallo en la reserva de memoria.\n");
	}
	return (0);
}
*/