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

void	*free_all(char **arr, int words)
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

size_t	count_words(char const *s, char c)
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

static int	word_len(const char *s, int i, char c)
{
	int	len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	len;
	size_t	j;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = word_len(s, i, c);
		res[j] = ft_substr(s, i, len);
		if (!res[j])
			return (free_all(res, j));
		j++;
		i += len;
	}
	res[j] = NULL;
	return (res);
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