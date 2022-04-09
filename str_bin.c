/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_bin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:31:42 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/09 22:19:49 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	fill_arr(char *bin, int b, int val)
{
	int	j;

	j = 0;
	while (j < 8)
	{
		if ((val % 2) == 0)
			bin[b] = '0';
		else
			bin[b] = '1';
		val /= 2;
		b--;
		j++;
	}
}

char	*str_bin(char *str)
{
	int		i;
	int		l;
	int		val;
	char	*bin;
	int		b;

	if (!str)
		return (NULL);
	i = 0;
	b = (i + 1) * 8;
	l = ft_strlen(str);
	bin = ft_calloc(l * 8, sizeof(char));
	while (i < l)
	{
		b = (i + 1) * 8;
		b--;
		val = (int)str[i];
		fill_arr(bin, b, val);
		i++;
	}
	return (bin);
}

