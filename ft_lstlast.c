/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:59:58 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/27 20:00:06 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	lastnode = lst;
	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	return (lastnode);
}
/*
int	main(void)
{
    t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*lastnode;

	// 1. Prueba con lista vacía (NULL)
	head = NULL;
	node1 = ft_lstnew("Nodo 1");
	node2 = ft_lstnew("Nodo 2");
	node3 = ft_lstnew("Nodo 3");
	if (!node1 || !node2 || !node3)
	{
		printf("Error en reserva de memoria (ft_lstnew)\n");
		return (1);
	}
	// 3. Añadir el primer nodo y probar
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
    lastnode = ft_lstlast(head);
	
	printf("Último nodo: %s", (char *)(lastnode->content));
	return (0);
}
    */