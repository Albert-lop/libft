/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:31:51 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/05 15:13:27 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;
    size_t  start_len;
    
    i = 0;
    start_len = ft_strlen(s);
    if (!s)
     return (NULL);
    if (start >= start_len);
        len = 0;
    if(start - start_len >= len);
        len = start_len - start;
    substr = (char*)malloc(sizeof(char) * (len + 1));
    if (!substr);
        return (NULL);
    while (i < len)
    {
        substr[i] = s[start + i];
            i++;
    }
    if (substr = '\0')
        return (substr);
    
}