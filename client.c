/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:06:20 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/11 07:37:29 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int c, char **v)
{
	char	*msg;
	int		i;

	i = 0;
	if (c != 3)
		write(2, "Usage: ./client <pid> <message>\n", 32);
	else
	{
		msg = str_bin(v[2]);
		while (*msg)
		{
			usleep(100);
			if (*msg == '0')
				kill(ft_atoi(v[1]), SIGUSR1);
			else if (*msg == '1')
				kill(ft_atoi(v[1]), SIGUSR2);
			msg++;
			if (++i == 8)
			{
				i = 0;
				usleep(150);
			}
		}
	}
	return (0);
}
