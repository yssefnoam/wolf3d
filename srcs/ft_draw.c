/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_2d_with_img.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:47:08 by ynoam             #+#    #+#             */
/*   Updated: 2020/11/21 16:50:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** ok this function is clearing and drawing whit images the whole window
** after that updating the player position and destroy the image
*/

void	ft_draw(void)
{
	t_images	img;
	t_rays		rays[g_data.win_width];

	mlx_clear_window(g_data.mlx_ptr, g_data.win_ptr);
	img.img = mlx_new_image(g_data.mlx_ptr, g_data.win_width,
			g_data.win_height);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
			&img.line_length, &img.endian);
	ft_update_player();
	cast_all_rays(rays);
	ft_draw_3d(&img, rays);
	ft_sort_sprit();
	ft_is_sprit_visible();
	draw_all_sprit(&img, rays);
	mlx_put_image_to_window(g_data.mlx_ptr, g_data.win_ptr, img.img, 0, 0);
	mlx_destroy_image(g_data.mlx_ptr, img.img);
}
