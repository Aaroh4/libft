/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:31:29 by ahamalai          #+#    #+#             */
/*   Updated: 2023/10/30 16:06:28 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pc;

	i = 0;
	pc = b;
	while (i != len)
	{
		*pc = c;
		pc++;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char b[6];
	ft_memset(b, 'a', 5);
	b[5] = '\0';
	printf("%s", b);
}*/
