/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:13:48 by ciparren          #+#    #+#             */
/*   Updated: 2026/01/27 19:13:51 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write(fd, &c, 1);
		return ;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}
/*
int	main(void)
{
    ft_putnbr_fd(3214, 1);
}
*/
