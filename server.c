/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:56:42 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/09 23:04:28 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include "minitalk.h"

/*when executed, our server should print pid, and text sent from client*/
/*s basically as mohamad said, we have to send that msg bit by bit, using signals.. which means we'll study bitwise, we'll put everything in a loop as long as the av exists.. we'll need SIGUSR1 and SIGUSR2 for if we have a 0 in our bits or a 1, and theeen we'll rint the whole msg ouuuf*/
char	storage;
void	handler(int sig)
{
	static int	i;

	if (sig == SIGUSR1)
	{
		storage = storage << 1;
//		write (1, "0", 1);
	}
	else if (sig == SIGUSR2)
	{
		storage = (storage << 1) + 1;
//		write (1, "1", 1);
	}
	i++;
//	write (1, &storage, 1);
	if (i == 8)
	{
		if (storage == '\n')
			write (1, "\n", 1);
		else
			write (1, &storage, 1);
		i = 0;
		storage = 0;
	}
}

int main()
{
	printf("%d\n", getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
	{
	//	usleep(500);
	}
}
