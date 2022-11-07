/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_scalar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:01:33 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/06 23:02:30 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	*add_scalar(t_vector *new, const t_vector *vec, double t)
{
	new->x = vec->x + t;
	new->y = vec->y + t;
	new->z = vec->x + t;
	return (new);
}

void	*minus_scalar(t_vector *new, const t_vector *vec, double t)
{
	new->x = vec->x - t;
	new->y = vec->y - t;
	new->z = vec->x - t;
	return (new);
}

void	*multiply_scalar(t_vector *new, const t_vector *vec, double t)
{
	new->x = vec->x * t;
	new->y = vec->y * t;
	new->z = vec->z * t;
	return (new);
}

void	*divide_scalar(t_vector *new, const t_vector *vec, double t)
{
	if (t == 0)
	{
		ft_putstr_fd("Floating point exception\n", 2);
		exit(EXIT_FAILURE);
	}
	return (multiply_scalar(new, vec, 1 / t));
}
