/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:02:54 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/09 15:46:40 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sub_str;
	size_t	i;
	size_t	f;

	sub_str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		f = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[f - 1] && ft_strchr(set, s1[f - 1]) && f > i)
			f--;
		sub_str = (char *)malloc(sizeof(char) * (f - i + 2));
		if (!sub_str)
			return (NULL);
		ft_strlcpy(sub_str, &s1[i], f - i + 1);
	}
	return (sub_str);
}
