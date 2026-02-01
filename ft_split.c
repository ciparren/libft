/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 23:17:32 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/20 23:17:34 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**free_all(char **arr, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**fill(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			len = get_word_len(&s[i], c);
			res[j] = ft_substr(s, i, len);
			if (!res[j])
				return (free_all(res, j));
			j++;
			i += len;
		}
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	return (fill(res, s, c));
}

/*
int	main(void)
{
	char	*s;
	char	c;

	s = "             Albus Percival Wulfric Brian Dumbledore                ";
	c = ' ';
	ft_split(s, c);
	return (0);
}
	*/

/*char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	contc;
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	row;
	char	*c1;
	char	*trim;

	c1 = &c;
	row = 0;
	// puedo ahorrarme la variable row con el conteo de palabras
	len = 0;
	i = 0;
	contc = 0;
	start = 0;
	trim = ft_strtrim(s,c1);
	while (trim[i] != '\0')
	{
		if (trim[i] == c && trim[i - 1] != c)
			contc++;
		i++;
	}
	// reservo el número de filas, que lo sé anallizando el string
	printf("El número de palabras: %zu\n", contc + 1);
	result = (char **)malloc(sizeof(char *) * (contc + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (trim[i])
	{
		if (trim[i] == c)
		{
			//result[row] = malloc((sizeof(char) * len)+ 1);
			result[row] = ft_substr(trim, start, len);
			printf("%s\n", result[row]);
			if (!result[row])
				free_all(result, contc + 1);
			len = 0;
			i++;
			start = i;
			row++;
		}
		len++;
		i++;
	}
	//row++;
	result[row] = ft_substr(trim, start, (i - start));
	printf("%s\n", result[row]);
	free(trim);
	return (result);
}
*/