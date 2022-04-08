/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:44:09 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/08 16:34:02 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);
size_t	ft_strlen(char *s);
void	*ft_calloc(size_t count, size_t size);
char	*message;
pid_t	c_pid;
