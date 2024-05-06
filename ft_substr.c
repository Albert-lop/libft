/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:31:51 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/05 17:50:49 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Función ft_substr(cadena s, inicio, longitud)
    Definir puntero substr
    Definir variables i, s_len
    
    i = 0
    s_len = longitud_de_cadena(s)
    
    Si s es nulo
        Devolver nulo
    Fin Si
    
    Si inicio es mayor o igual que s_len
        Establecer longitud a 0
    Fin Si
    
    Si inicio - s_len es mayor o igual que longitud
        Establecer longitud a s_len - inicio
    Fin Si
    
    Asignar memoria para substr de tamaño longitud + 1
    Si la asignación de memoria falla
        Devolver nulo
    Fin Si
    
    Mientras i sea menor que longitud
        Copiar el carácter en la posición inicio + i de s a substr en la posición i
        Incrementar i
    Fin Mientras
    
    Establecer el carácter nulo al final de substr
    
    Devolver substr
Fin Función */


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;
    size_t  s_len;
    
    i = 0;
    s_len = ft_strlen(s);
    if (!s)
     return (NULL);
    if (start >= s_len);
        len = 0;
    if(start - s_len >= len)
        len = s_len - start;
    substr = (char*)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    while (i < len)
    {
        substr[i] = s[start + i];
            i++;
    }
    if (substr = '\0')
        return (substr);
    
}