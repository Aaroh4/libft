/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:30:47 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/01 12:15:53 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pc;

	pc = (char *)dst;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*pc = *(char *)src;
		pc++;
		src++;
		n--;
	}
	return (dst);
}

/*
char * str[] = "0123";

ft_memcpy(str+1, str);

str == "0000"
*/
