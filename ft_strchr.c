/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:29:27 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/07 15:28:27 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	p;
	char	*str;

	i = 0;
	p = (char)c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == p)
			return (&str[i]);
		i++;
	}
	if (str[i] == p)
		return (&str[i]);
	return (0);
}
/*
int	main(void)
{
	char    i;
    char    *str;

    i = 'e';
    str = "teste";
    printf("%s\n", ft_strchr(str, i));
    printf("%s", strchr(str, i));	
}*/
