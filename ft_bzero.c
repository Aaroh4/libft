/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:30:24 by ahamalai          #+#    #+#             */
/*   Updated: 2023/10/30 16:28:01 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char b[5];
	ft_bzero(b, 5);
}*/
