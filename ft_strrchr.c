/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:16 by ahamalai          #+#    #+#             */
/*   Updated: 2023/10/30 17:36:42 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i--;
	}
	if (s[i] == c)
		return (&((char *)s)[i]);
	return (0);
}
/*
int main()
{
    char    i;
    char    *str;

    i = 'e';
    str = "aaaaaabcccbcbcbe12345";
    printf("%s\n", ft_strrchr(str, i));
    printf("%s", strrchr(str, i));
}*/
