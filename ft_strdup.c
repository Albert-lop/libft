/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:45:40 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/03 17:02:06 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	int		i;

	i = (ft_strlen (s1) + 1);
	buffer = (char *)malloc(sizeof(char) * ft_strlen (s1) + 1);
	if (!buffer)
	{
		return (NULL);
	}
	ft_strlcpy(buffer, s1, i);
	return (buffer);
}
