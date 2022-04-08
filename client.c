/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:06:20 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/08 16:31:40 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "minitalk.h"



/*our client uses the pid to send the message, so it's gonna be displayed in out server*/

void	fill_msg()
{
	char	v[] = "abcdefajdls";
	size_t	l;
	size_t	i;

	i = 0;
	l = ft_strlen(v);
	message = ft_calloc(l, sizeof(char));
	while (i <= l)
	{
		message[i] = v[i];
		i++;
	}
}

void	c_handler()
{
	fill_msg();
}

int main(int c, char **v)
{
	signal(SIGUSR2, c_handler);
	if (c != 3)
		write(2,"wrong amount of arguments.\nUsage: ./server <pid> <message> ", 60);
else
	{
		kill(ft_atoi(v[1]), SIGUSR1);
		kill(getpid(), SIGUSR2);
	}
	return (0);
}
