/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:44:09 by lchokri           #+#    #+#             */
/*   Updated: 2022/04/09 22:26:35 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* leaks f str_bin !!!!!!!
 * we have to freee the ptr
 * we allocated
 * just don't forget
 * kay bye*/
int		ft_atoi(char *str);
size_t	ft_strlen(char *s);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	*str_bin(char *str);
char	message;
pid_t	c_pid;
