/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:32:44 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/25 09:55:32 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "typedef.h"
# include "../libft/libft.h"
# include <math.h>

void	*addition(t_vector *new, const t_vector *u, const t_vector *v);
void	*subtraction(t_vector *new, const t_vector *u, const t_vector *v);
void	*multiply(t_vector *new, const t_vector *u, const t_vector *v);
double	dot_product(const t_vector *u, const t_vector *v);
void	*cross_product(t_vector *new, const t_vector *u, const t_vector *v);

void	*add_scalar(t_vector *new, const t_vector *vec, double t);
void	*minus_scalar(t_vector *new, const t_vector *vec, double t);
void	*multiply_scalar(t_vector *new, const t_vector *vec, double t);
void	*divide_scalar(t_vector *new, const t_vector *vec, double t);

void	vector_setter(t_vector *vec, double x, double y, double z);
bool	equal(t_vector *u, t_vector *v);
double	length_sqrd(t_vector *vec);
double	length(t_vector *vec);
void	*unit_vector(t_vector *new, t_vector *vec);
void	*minimum(t_vector *new, t_vector *u, t_vector *v);
void	coordinates_set(t_vector *u, t_vector *v, t_vector *w);

#endif
