/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:33:48 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/27 19:33:50 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		cont;

	aux = ft_lstnew(NULL);
	aux = lst;
	cont = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		cont++;
	}
	return (cont);
}

/*
int	main(void)
{
    t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	// 1. Prueba con lista vacía (NULL)
	head = NULL;
	size = ft_lstsize(head);
	printf("Test 1 - Lista vacía: %d (Esperado: 0)\n", size);
	// 2. Crear nodos usando ft_lstnew 
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
	size = ft_lstsize(head);
	printf("Test 2 - Un nodo: %d (Esperado: 1)\n", size);
	// 4. Añadir más nodos
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	
	// La lista ahora es: Nodo 3 -> Nodo 2 -> Nodo 1 -> NULL
	size = ft_lstsize(head);
	printf("Test 3 - Tres nodos: %d (Esperado: 3)\n", size);
	return (0);
}
*/
