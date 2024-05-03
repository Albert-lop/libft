/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:00:49 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/03 16:45:03 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
/// @brief 
/// @param c 
/// @return return 1 si es un numero entero retur 0 si es otra cosa
int		ft_isdigit(int i);
/// @brief 
/// @param c 
/// @return return 1 si es letra mayscula o minuscula retur 0 si es otra cosa 
int		ft_isalpha(int i);
/// @brief Comprueba si el carácter pasado es alfanumérico(letra o un dígito).
/// @param c 
/// @return return 1 si es un entero 0 una lera
int		ft_isalnum(int i);
/// @brief 
/// @param c 
/// @return  return 1 sie es un caracter representable en asciin 127bit
int		ft_isascii(int i);
/// @brief Indica si el carácter es imprimible.
/// @param c 
/// @return return 1 si es imprimible 0 sino lo es
int		ft_isprint(int i);
/// @brief combierte en mayusculas 
/// @param c 
/// @return 
int		ft_toupper(int i);
/// @brief combierte en minusculas
/// @param c 
/// @return 
int		ft_tolower(int i);
/// @brief 1ª aparacion de c (convertida a char) en la cadena apuntada por s.
/// @param c 
/// @return un puntero al carácter ubicado,o NULL si el carácter no aparece
char	*ft_strchr(const char *s, int c);
/// @brief calcula la longitud de la cadena s.
/// @param c 
/// @return La longitud del string y 0 si el string esta vacío.
int		ft_strlen(const char *str);
/// @brief devuelve un puntero a la última aparición de c 
/// @param c 
/// @return un puntero al carácter ubicado,o NULL si el carácter no aparece
char	*ft_strrchr(const char *s, int c);
//// @brief Copia el valor de c en cada uno de los primeros n ve apuntado por s.
/// @param b 
/// @param c 
/// @param len 
void	*ft_memset(void *b, int c, size_t len);
/// @brief copia n bytes desde la ubicación de memoria src hacia dest
/// @param dst 
/// @param src 
/// @param n 
/// @return 
void	*ft_memcpy(void *dst, const void *src, size_t n);
/// @brief 
/// @param dst 
/// @param src 
/// @param len 
/// @return 
void	*ft_memmove(void *dst, const void *src, size_t n);
/// @brief Busca la primera aparición de c en la cadena señalada por str.
/// @param s 
/// @param c 
/// @param n 
/// @return un puntero a la 1 aparición del carter c en str o NULL si no hay
void	*ft_memchr(const void *s, int c, size_t n);
/// @brief 
/// @param s1 
/// @param s2 
/// @param n 
/// @return 
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/// @brief copia 
/// @param dst 
/// @param src 
/// @param dstsize 
/// @return 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/// @brief concatena src en dst con un tamaño bufer maximo de dstsize
/// @param dst donde vamos a concatenar
/// @param src lo que vamos a cpiar
/// @param dstsize tamaño maximo 
/// @return si no se pude return longitud de dst/src//copia despues del \0de dst
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/// @brief 
/// @param str 
/// @return 
int		ft_atoi(const char *str);
/// @brief 
/// @param s 
/// @param n 
void	ft_bzero(void *s, size_t n);
/// @brief comparar dos cadenas
/// @param s1 
/// @param s2 
/// @param n 
/// @return entero indica si las cadenas son iguales o si una es mayor/menor. 
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/// @brief busca una subcadena needle dentro de haystack,pero con longitud len
/// @param haystack cadena donde busca 
/// @param needle subcadena 
/// @param len 
/// @return puntero a 1ª ocurrencia de needle dentro de haystack,NULL si no 
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/// @brief 
/// @param count 
/// @param size 
/// @return returns a pointer to the allocated memory.
void	*ft_calloc(size_t count, size_t size);
/// @brief function allocates sufficient memory for a copy of the string s1
/// @param s1 
/// @return pointer to it may subsequently be used an argument to the function
char	*ft_strdup(const char *s1);

#endif
