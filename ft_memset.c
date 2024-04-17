/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:59:21 by alberlop          #+#    #+#             */
/*   Updated: 2024/04/16 20:35:04 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len -1] = c;
		len--;
	}
	return (b);
}

/*#include <stdio.h>

int main()
{
	char	str[]= "que hace";
	printf("%s",ft_memset((void *)str, 'm', 5));
	return (0);
}*/
