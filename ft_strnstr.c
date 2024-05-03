/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:03:00 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/02 20:06:07 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	size_t	stack_len;

	needle_len = 0;
	while (needle[needle_len])
		needle_len ++;
	if (!needle_len)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		stack_len = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && i < len)
		{
			i++;
			j++;
		}
		if (j == needle_len)
			return ((char *)&haystack[stack_len]);
		i = stack_len + 1;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s1 = "hola que paza";
	char *s2 = "que";
	char *s3 = ft_strnstr(s1, s2, 15);
	char *s4 = strnstr(s1, s2, 15);
	printf("ft_strnstr: %s\n", s3);
	printf("strnstr: %s\n", s4);
	return (0);
} */