/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_display_julia.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:42:59 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/15 17:48:44 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void my_mlx_pixel_put(t_fractal **data, int x, int y, int color)
{
	char* dst = (*data)->addr + (y * (*data)->line_lenght + x * ((*data)->bits_per_pixel) / 8);
	*(unsigned int*)dst = color;
}

// static int close_window(t_fractal** data)
// {
// 	return (mlx_destroy_display((*data)->win));
// }

// static int key_hook()
// {
// 	printf("key_hook\n");
// 	return (0);
// }

// static int mouse_hook(int num)
// {
// 	if (num == 1)
// 		printf("Left click:\n");
// 	else if (num == 2)
// 		printf("Right click\n");
// 	else if (num == 3)
// 		printf("Middle click\n");
// 	else if (num == 4)
// 		printf("Scroll up\n");
// 	else if (num == 5)
// 		printf("Scroll down\n");	
// 	return (0);
// }

static int julia_calc(t_fractal** data)
{
	(*data)->x = (*data)->zx 	
}

void image_display_julia(t_fractal** data)
{
	mlx_loop_hook((*data)->mlx, julia_calc, data);
	return ;
}