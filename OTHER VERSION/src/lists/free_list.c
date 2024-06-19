/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:06:46 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/19 14:10:14 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_list(t_list **stack)
{
	t_list	*current;
	t_list	*temp;

	current = *stack;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}