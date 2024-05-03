/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:59:42 by alberlop          #+#    #+#             */
/*   Updated: 2024/04/25 11:42:44 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0 || (size_t)ft_strlen(dst) > dstsize)
		return (dstsize + (size_t)ft_strlen(src));
	return ((size_t)ft_strlen(dst)
		+ ft_strlcpy(&dst[ft_strlen(dst)], src, dstsize - ft_strlen(dst)));
}
