/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_bonus_lstsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberlop <alberlop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:40 by alberlop          #+#    #+#             */
/*   Updated: 2024/05/24 12:19:46 by alberlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bonus_lstsize(t_list *lst)
{
	int	nbr;

	nbr = 0;
	while (lst != (void *)0)
	{
		nbr = lst->next;
		nbr++;
	}
	return (nbr);
}
