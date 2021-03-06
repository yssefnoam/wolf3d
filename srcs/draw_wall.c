/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:58:25 by ynoam             #+#    #+#             */
/*   Updated: 2020/11/22 16:17:34 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** arr[0] == x
** arr[1] == wall_height
** arr[2] == wall_top_pixel
** arr[3] == wall_bottom_pixel
*/

void	draw_wall(t_images *img, t_rays ray[], int arr[])
{
	int				offset_x;
	int				offset_y;
	int				distance_from_top;
	unsigned int	color;
	int				y;

	(ray[arr[0]].was_hit_ver) ? (offset_x = (int)ray[arr[0]].wall_hity %
			TILE_SIZE) : (offset_x = (int)ray[arr[0]].wall_hitx %
				TILE_SIZE);
	y = arr[2];
	while (y < arr[3])
	{
		distance_from_top = y + (arr[1] / 2) - (g_data.win_height / 2);
		offset_y = distance_from_top * ((float)g_txtr_n.width / arr[1]);
		if (!(ray[arr[0]].was_hit_ver) && ray[arr[0]].is_rayfacing_up)
			color = g_txtr_n.addr[(offset_y * g_txtr_n.height) + offset_x];
		else if (!(ray[arr[0]].was_hit_ver) && ray[arr[0]].is_rayfacing_down)
			color = g_txtr_s.addr[(offset_y * g_txtr_s.height) + offset_x];
		else if (ray[arr[0]].was_hit_ver && ray[arr[0]].is_rayfacing_left)
			color = g_txtr_w.addr[(offset_y * g_txtr_w.height) + offset_x];
		else
			color = g_txtr_e.addr[(offset_y * g_txtr_e.height) + offset_x];
		my_mlx_pixel_put(img, arr[0], y, color);
		y++;
	}
}
