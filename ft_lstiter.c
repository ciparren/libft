/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:45:00 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/28 19:45:03 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(void *content)
{
	printf(" -> Contenido: %s\n", (char *)content);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;

	// 2. PREPARACIÓN: Crear una lista con 3 nodos
	// Nota: Usamos strings estáticos para simplificar,
		así que la función del_spy
	// no hará 'free' del texto, solo 'free' del nodo (que hace ft_lstdelone).
	head = NULL;
	nodo1 = ft_lstnew("Primero");
	nodo2 = ft_lstnew("Segundo");
	nodo3 = ft_lstnew("Tercero");
	// Enlazar manualmente si no tienes ft_lstadd_back confiable aún
	head = nodo1;
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL; 
	printf("--- ESTADO INICIAL ---\n");
	printf("Cabeza apunta a: %p\n", (void *)head);
	printf("Contenido nodo 1: %s\n", (char *)head->content);
	// 3. PRUEBA DE FUEGO: Llamar a ft_lstclear
	printf("\n--- EJECUTANDO FT_LSTITER ---\n");
	// Pasamos la dirección de head (&head) porque lstclear pide t_list **
	ft_lstiter(head, f);
	return (0);
}
    */
