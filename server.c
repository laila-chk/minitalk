/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:56:42 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/08 16:28:33 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include "minitalk.h"

/*when executed, our server should print pid, and text sent from client*/


void	handler()
{
	size_t	l;

	l = ft_strlen(message);
	write(1, message, l);

}

int main()
{
	printf("%d\n", getpid());
	signal(SIGUSR1, handler);
	while (1)
	{
			
	}
}
