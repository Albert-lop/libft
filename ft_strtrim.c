/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:02:54 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/13 17:38:54 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sub_str;
	size_t	i;
	size_t	f;

	f = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && i < f)
	{
		i++;
	}
	while (ft_strchr(set, s1[f]) != NULL && i < f)
	{
		f--;
	}
	sub_str = ft_substr(s1, i, f - i + 1);
	if (!sub_str)
		return (0);
	return (sub_str);
}
