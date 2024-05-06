/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:02:54 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/05 20:31:31 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

estatic int ft_rastr (const char *set, const char c )
{
    int i;
    
    i = 0;
    while (set[i])
    {
         if (set[i] == c)
           {
             return (1);
           }
    }       i++;
    return (0);
}
