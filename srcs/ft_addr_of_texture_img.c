/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr_of_texture_img.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:31:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 16:21:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_addr_of_texture_img(void)
{
	g_txtr_n.addr = mlx_get_data_addr(g_txtr_n.img, &g_txtr_n.bpp,
			&g_txtr_n.line_length, &g_txtr_n.endian);
	printf("%s %d\n",g_txtr_n.file, g_txtr_n.line_length);
	g_txtr_s.addr = mlx_get_data_addr(g_txtr_s.img, &g_txtr_s.bpp,
			&g_txtr_s.line_length, &g_txtr_s.endian);
	printf("%s %d\n",g_txtr_s.file, g_txtr_s.line_length);
	g_txtr_e.addr = mlx_get_data_addr(g_txtr_e.img, &g_txtr_e.bpp,
			&g_txtr_e.line_length, &g_txtr_e.endian);
	printf("%s %d\n",g_txtr_e.file, g_txtr_e.line_length);
	g_txtr_w.addr = mlx_get_data_addr(g_txtr_w.img, &g_txtr_w.bpp,
			&g_txtr_w.line_length, &g_txtr_w.endian);
	printf("%s %d\n",g_txtr_w.file, g_txtr_w.line_length);
	g_txtr_sprit.addr = mlx_get_data_addr(g_txtr_sprit.img, &g_txtr_sprit.bpp,
			&g_txtr_sprit.line_length, &g_txtr_sprit.endian);
	printf("%s %d\n",g_txtr_sprit.file, g_txtr_sprit.line_length);
}
