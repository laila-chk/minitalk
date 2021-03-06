/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:56:42 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/11 03:21:10 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	g_storage;

void	handler(int sig)
{
	static int	i;

	if (sig == SIGUSR1)
		g_storage = (g_storage << 1) + 0;
	else if (sig == SIGUSR2)
		g_storage = (g_storage << 1) + 1;
	i++;
	if (i == 8)
	{
		write (1, &g_storage, 1);
		i = 0;
		g_storage = 0;
	}
}

int	main(void)
{
	ft_putnbr(getpid());
	write(1, "\n", 1);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
	{
		pause();
	}
}
