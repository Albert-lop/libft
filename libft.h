/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:00:49 by alberlop          #+#    #+#             */
/*   Updated: 2024/06/03 16:29:37 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/// @brief
///check if the value is a number between '0' or '9' based on ASCII code (48-57)
/// @param c 
/// @return  1 if is a digit or 0 if not
int		ft_isdigit(int i);
/// @brief 
///Checks if the value is lower casse or up case in the range of (a-z) or (A-Z)
/// @param c 
/// @return 1 if is (a-z) and (0) if is not any of them if is (A-Z)
int		ft_isalpha(int i);
/// @brief Checks if the passed character is alphanumeric (letter or a digit).
/// @param c 
/// @return return 1 if it is an integer 0 a lera
int		ft_isalnum(int i);
/// @brief 
///Checks if a char value is between (0-127) 
///range for printing based on ASCII code
/// @param c 
/// @return 1 be represented as a character in US-ASCII Otherwise, it returns 0.
int		ft_isascii(int i);
/// @brief Checks if a char value is between (32-126) 
///range for printing based on ASCII code
/// @param c 
/// @return 
int		ft_isprint(int i);
/// @brief
///Converts if is alnum  to uppercase
/// @param c 
/// @return  1 if is lower casse 2 if upper case 3 if is a digit
int		ft_toupper(int i);
/// @brief Converts if is alnum  to lower casse
/// @param c 
/// @return  1 if is lower casse 2 if upper case 3 if is a digit
int		ft_tolower(int i);
/// @brief 1st appearance of c (converted to char)in the string pointed to by s.
/// @param c 
/// @return 
///a pointer to the located character NULL if the character does not appear
char	*ft_strchr(const char *s, int c);
/// @brief calculate the length of the string s.
/// @param c 
/// @return The length of the string and 0 if the string is empty.
int		ft_strlen(const char *str);
/// @brief returns a pointer to the last occurrence of c
/// @param c 
/// @return 
///a pointer to the located character NULL if the character does not appear
char	*ft_strrchr(const char *s, int c);
/// @brief Copy the value of c into each of the first n ve pointed to by s.
/// @param b 
/// @param c 
/// @param len 
void	*ft_memset(void *b, int c, size_t len);
/// @brief copies n bytes from memory location src to dest
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
/// @brief returns a str at the beginning of the ascii value   
/// @param str string to iterate
/// @param c ascii value to search
/// @return the new str at the beginning of c
/// character (\0)
void	*ft_memchr(const void *s, int c, size_t n);
///@brief compares byte string s1 agains byte string s2. 
///assumed to be n bytes longfrancinette
///@param s1 first str 
///@param s2 second str
///@param n number of bytes to compare
///@return zero if the two strings are identical otherwise
/// returns the difference between the first two differing bytes
/// @return 
int		ft_memcmp(const void *s1, const void *s2, size_t n);
///@brief copies the src to dst value 
///@param dst the str buffer to be copied
///@param src str source copied
///@param dstsize number of bytes copied to dst
///@return return the size of the src 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/// @brief concatenate src into dst with a maximum buffer size of dstsize
/// @param dst where are we going to concatenate
/// @param src what we are going to copy
/// @param dstsize  maximum size
/// @return If not possible, return length of dst/src//copy after \0 of dst
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/*The atoi() function converts the initial portion of the string pointed to
	by str to int representation.*/
int		ft_atoi(const char *str);
/// @brief Works like memset except you don't have to specify 
///what byte to write, it'll always be 0
/// @param s pointer to the value that will be written with '\0'
/// @param n the lenght of s
void	ft_bzero(void *s, size_t n);
///@brief compares two strings and return the diff value s1 - s2
///@param s1 first str
///@param s2 second str
///@result return the diff value between to strings and the size of
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/// @brief looks for a substring needle inside haystack, but with length len
/// @param haystack string where to search
/// @param needleb substring
/// @param len size max
/// @return pointer to 1st occurrence of needle within haystack, NULL otherwise
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/// @brief Initializes a pointer with default values to zero
///can return NULL of no memory available
/// @param num number of elements
/// @param size sizeof bytes
/// @return pointer of any type with defaults values 
void	*ft_calloc(size_t count, size_t size);

/// @brief 	Duplicates the str to a new one. can return NULL
/// @param str string to copy
/// @return new str 
char	*ft_strdup(const char *s1);
/// @brief return a new string with the removed characters of set
/// @param s1 the string to be trim 
/// @param s2 characters to trim
/// @return new str or NULL value if memory reserve fails
char	*ft_strtrim(char const *s1, char const *set);
/// @brief creates a new str from the start index with the len size
/// @param  s string for creation
/// @param start index of the s to start copying
/// @param len size of the substring
/// @return result substring NULL if memory failed
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*Reserve (using malloc(3)) an array of strings resulting from separating 
	the string 's' into substrings using the character 'c' as a delimiter. 
	the array must be terminated with a NULL pointer.*/
char	**ft_split(char const *s, char c);
/**
 * Converts an integer to a string.
 *
 * @param n The integer to convert.
 * @return The string representation of the integer.
 */
char	*ft_itoa(int n);
/**
 * Writes a character to the specified file descriptor.
 *
 * @param c The character to be written.
 * @param fd The file descriptor to write the character to.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * Applies the function `f` to each character of the string `s`,
 * passing its index as the first argument.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/// @brief Applies a function to each character of a string, 
///creating a new string with the results.
/// @param s The string to iterate through.
/// @param f The function to apply to each character. 
//The function takes the index of the character as a parameter.
/// @return The new string created by applying the function to each character
/// of the original string.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * Writes the string `s` to the file descriptor `fd`.
 *
 * @param s The string to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * Writes the string `s` followed by a newline character ('\n') to the file
 * descriptor `fd`.
 *
 * @param s The string to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *s, int fd);
/// @brief creates a new str with s1 appended to s2
/// @param s1 first str
/// @param s2 first str
/// @return new str or NULL value
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * Writes the integer 'n' to the file descriptor 'fd'.
 *
 * @param n The integer to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * Creates a new linked list node with the specified content.
 *
 * @param content The content to be stored in the new node.
 * @return A pointer to the newly created node,
 *  or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content);
/**
 * Applies the function `f` to each element of the linked
 *  list `lst` and creates a new
 * list resulting from the successive applications of `f`.
 *  The `del` function is used
 * to delete the content of an element if needed.
 *
 * @param lst The pointer to the first element of the linked list.
 * @param f A pointer to the function to apply to each element
 *  of the linked list.
 *          This function should take a void pointer as a parameterç
 *  and return a void pointer.
 * @param del A pointer to the function used to delete the content
 *  of an element if needed.
 *            This function should take a void pointer as a
 *  parameter and return nothing.
 * @return The new linked list created by applying `f` to each element of `lst`.
 *         If an allocation fails, the function returns NULL.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/// @param lst 
/// @param  
void	ft_lstadd_front(t_list **lst, t_list *new);
/// @brief 
/// @param lst 
/// @param  
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * Clears a linked list by deleting all of its nodes and freeing the memory.
 *
 * @param lst The address of a pointer to the first node of the linked list.
 * @param del The function used to delete the content of each node.
 *            This function is called with the content of
 * 			  each node as its parameter.
 *            If the parameter is NULL, no deletion is performed.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));
/**
 * Clears a linked list by deleting all of its nodes and freeing the memory.
 *
 * @param lst The address of a pointer to the first node of the linked list.
 * @param del The function used to delete the content of each node.
 *            This function is called with the content of
 * 			  each node as its parameter.
 *            If the parameter is NULL, no deletion is performed.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));
/**
 * Returns the last element of a linked list.
 *
 * @param lst The pointer to the head of the linked list.
 * @return The pointer to the last element of the linked list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/// @brief 
/// @param lst 
/// @return 
int		ft_lstsize(t_list *lst);
/**
 * Applies the function `f` to each element of the linked
 *  list `lst` and creates a new
 * list resulting from the successive applications of `f`.
 *  The `del` function is used
 * to delete the content of an element if needed.
 *
 * @param lst The pointer to the first element of the linked list.
 * @param f A pointer to the function to apply to each element
 *  of the linked list.
 *          This function should take a void pointer as a parameterç
 *  and return a void pointer.
 * @param del A pointer to the function used to delete the content
 *  of an element if needed.
 *            This function should take a void pointer as a
 *  parameter and return nothing.
 * @return The new linked list created by applying `f` to each element of `lst`.
 *         If an allocation fails, the function returns NULL.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/// @brief 
/// @param lst lst The pointer to the head of the linked list.
/// @return The pointer to the last element of the linked list.
t_list	*ft_lstlast(t_list *lst);
#endif
