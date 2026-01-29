/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:44:33 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/16 12:44:34 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size <= dst_len)
        return (size + src_len);
    i = 0;
    while (src[i] != '\0' && (dst_len + i) < (size - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    
    return (dst_len + src_len);
}

/*
int	main(void)
{
	char	buf1[1024];
	char	buf2[1024];

    buf1[1024] = "m";
    buf2[1024] = "Hola ";
    printf("Resultado de custom: <%zu>", ft_strlcat(buf2, buf1, 0));
    //printf("Resultado de oficial: <%zu>", strlcat(buf2, buf1, 0));
    return (0);
}
*/