/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:22:26 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/29 19:23:17 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	cont;
	int	check;

	cont = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			cont++;
			check = 1;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (cont);
}

static	char	**ft_freemem(char **ptr, size_t i)
{
	while (i--)
		free(ptr[i]);
	free(ptr);
	return (NULL);
}

static void	ft_fill_split(char **ptr, const char *s, int c, size_t len)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= len)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == len) && start >= 0)
		{
			ptr[j] = ft_substr(s, start, i - start);
			if (ptr[j] == NULL)
			{
				ft_freemem(ptr, j - 1);
				return ;
			}
			j++;
			start = -1;
		}
		i++;
	}
	ptr[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	size_t	len;
	char	**ptr;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	words = ft_count_words(s, c);
	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	ft_fill_split(ptr, s, c, len);
	return (ptr);
}
