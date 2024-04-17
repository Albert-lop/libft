/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:50:01 by alberlop          #+#    #+#             */
/*   Updated: 2024/04/09 17:55:23 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
/*
#include <stdio.h>

int main(void)
{
    int c;
    c = '/';
    ft_isalpha(c);
    printf  ("%d", ft_isalpha(c));
    return (0);
}*/
