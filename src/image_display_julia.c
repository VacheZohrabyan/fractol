/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_display_julia.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:42:59 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/16 17:54:03 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"


// static int close_window(t_fractal** data)
// {
// 	return (mlx_destroy_display((*data)->win));
// }

// static int key_hook()
// {
// 	printf("key_hook\n");
// 	return (0);
// }


// static void my_mlx_pixel_put(t_fractal **data, int x, int y, int color)
// {
// 	char* dst = (*data)->addr + (y * (*data)->line_lenght + x * ((*data)->bits_per_pixel) / 8);
// 	*(unsigned int*)dst = color;
// }

void image_display_julia(t_fractal** data)
{
	
	mlx_loop_hook((*data)->mlx, julia_calc, data);
	mlx_mouse_hook((*data)->win, mouse_hook, *data);
	mlx_key_hook((*data)->win, key_hook, data);
	return ;
}