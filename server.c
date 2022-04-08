/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:56:42 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/08 22:34:21 by lchokri          ###   ########.fr       */
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

void	handler()
{
//	size_t	l;

//	l = ft_strlen(message);
	write(1, &message, 1);
	write(1, "\n", 1);

}

int main()
{
	printf("%d\n", getpid());
	signal(SIGUSR1, handler);
	while (1)
	{
			
	}
}
