/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:59:32 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/06 12:20:46 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	int				nbr;

	i = 0;
	sign = 0;
	nbr = 0;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	while (str[i])
	{
		
	}
	
}