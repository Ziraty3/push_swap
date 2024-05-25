/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:00:50 by ziratya           #+#    #+#             */
/*   Updated: 2024/05/25 15:34:31 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_ab *ab)
{
	ft_printf("pa\n");
	push(&ab->lst_b, &ab->lst_a);
}

void	sa(t_ab *ab)
{
	ft_printf("sa\n");
	swap(&ab->lst_a);
}

void	ra(t_ab *ab)
{
	ft_printf("ra\n");
	rotate(&ab->lst_a);
}

void	rra(t_ab *ab)
{
	ft_printf("rra\n");
	reverse_rotate(&ab->lst_a);
}
