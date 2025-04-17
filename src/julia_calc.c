/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:11:49 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/17 15:40:01 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

static void my_mlx_pixel_put(t_fractal **data, int x, int y, int color)
{
	char* dst = (*data)->addr + (y * (*data)->line_lenght + x * ((*data)->bits_per_pixel) / 8);
	*(unsigned int*)dst = color;
}

int julia_calc(t_fractal** data)
{
	int i, j;
	i = 0;
	j = 0;
	
	double cx, cy;
	
	cx = -0.7;
	cy = 0.27015; 
	mlx_put_image_to_window((*data)->mlx, (*data)->win, (*data)->img, 0, 0);
	while (i < HEIGHT)
	{
		j = 0;
		while (j < WIDTH)
		{
			double zx, zy;
			map_complex(j, i, *data, &zx, &zy);
			int it = julia_iterations(zx, zy, cx, cy, MAX_ITER);
			int color = (it == MAX_ITER) ? 0x000000 : it * (*data)->color;
			// mlx_pixel_put((*data)->mlx, (*data)->win, j, i, color);
			my_mlx_pixel_put(data, j, i, color);
			// printf("%lf %lf\n", zx , zy);
            ++j;
		}
		++i;
	}
	return (0);
}