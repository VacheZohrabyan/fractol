/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:41:38 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/15 14:15:04 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int main(int argc, char** argv)
{
	t_fractal* data = (t_fractal*)malloc(sizeof(t_fractal));
	if (!data)
		return (0);
	chack_function(argc, argv, &data);
	// data->mlx = mlx_init();
	// data->win = mlx_new_window(data->mlx, WIDTH, HEIGHT, argv[1]);
	// data->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	// data->addr = mlx_get_data_addr(data->img, &(data->bits_per_pixel), &(data->line_lenght), &(data->endian));
	// for (int y = 0; y < HEIGHT; y++)
	// {
	// 	for (int x = 0; x < WIDTH; x++)
	// 	{
	// 		int color = 0xFFFFFF;
	// 		char *pixel = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	// 		*(unsigned int*)pixel = color;           
	// 	}
	// }
	// mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
	// mlx_loop(data->mlx);
	// return (0);
}
