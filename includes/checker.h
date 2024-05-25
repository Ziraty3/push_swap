/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:39:12 by ziratya           #+#    #+#             */
/*   Updated: 2024/05/25 15:34:39 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

int	check_instructions(char *instruction, t_lst **lst_a, t_lst **lst_b);
int	checker(t_ab *ab);

#endif
