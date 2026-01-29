/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:00:08 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/27 19:00:10 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newl;

	newl = (t_list *)malloc(sizeof(t_list));
	if (!newl)
		return (NULL);
	newl->content = content;
	newl->next = NULL;
	return (newl);
}
