/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_to_scene.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:54:42 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/07 01:12:33 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	*parse_to_scene(t_scene **scene, t_objlst *object_list)
{
	t_parse		*object;

	*scene = set_scene(WIN_WIDTH, WIN_HEIGHT);
	while (object_list)
	{
		object = object_list->object;
		if (object->type == AMBIENT)
			(*scene)->ambient = set_ambient(object_list);
		else if (object->type == CAMERA)
			(*scene)->camera = set_camera(*scene, object_list);
		else if (object->type == LIGHT)
			set_light(*scene, object_list);
		else if (object->type == SPHERE)
			set_sphere(*scene, object_list);
		else if (object->type == PLANE)
			set_plane(*scene, object_list);
		else if (object->type == CYLINDER)
			set_cylinder(*scene, object_list);
		object_list = object_list->next;
	}
	return (scene);
}
