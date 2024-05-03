/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:39:59 by hutzig            #+#    #+#             */
/*   Updated: 2024/05/03 16:55:46 by hutzig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp_lst;
	int		counter;

	counter = 0;
	tmp_lst = lst;
	while (tmp_lst)
	{
		counter++;
		tmp_lst = tmp_lst->next;
	}
	return (counter);
}
