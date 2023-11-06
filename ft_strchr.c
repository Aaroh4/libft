/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:29:27 by ahamalai          #+#    #+#             */
/*   Updated: 2023/10/30 17:33:28 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	if (s[i] == c)
		return (&((char *)s)[i]);
	return (0);
}
/*
int	main(void)
{
	char    i;
    char    *str;

    i = 'e';
    str = "Haaaaello";
    printf("%s\n", ft_strchr(str, i));
    printf("%s", strchr(str, i));	
}*/
