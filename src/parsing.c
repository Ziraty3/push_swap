/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:53:31 by ziratya           #+#    #+#             */
/*   Updated: 2024/05/25 15:34:31 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_double(t_lst *lst, int nb)
{
	t_lst	*current;

	current = lst;
	while (current)
	{
		if (current->nb == nb)
			return (1);
		current = current->next;
	}
	return (0);
}

int	check_input(char *av, long nb, t_lst *lst)
{
	int	i;

	i = -1;
	while (av[++i])
	{
		if ((!ft_isdigit(av[i]) && i != 0) || ((i == 0 && av[i] != '-')
				&& (i == 0 && av[i] != '+') && !ft_isdigit(av[i])))
			return (0);
		if (check_double(lst, (int)nb))
			return (0);
	}
	return (1);
}
