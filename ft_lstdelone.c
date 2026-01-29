/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:40:35 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/28 19:45:25 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
Recibe como parámetro un nodo ‘lst’ y libera la
memoria del contenido utilizando la función ‘del’
dada como parámetro. También libera el nodo en sí
mismo, pero no libera el siguiente nodo.
*/
