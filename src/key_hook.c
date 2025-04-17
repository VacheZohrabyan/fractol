/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:54:40 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/17 15:53:26 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int key_hook(int keycode, void *param)
{
	t_fractal *data = (t_fractal *)param;

	if (keycode == 65307) // ESC
		exit(0);
	else if (keycode == 65362) // UP
		data->y *= 1.1;
	else if (keycode == 65364) // DOWN
		data->y /= 1.1;
	else if (keycode == 65361) // LEFT
		data->x *= 1.1;
	else if (keycode == 65363) // RIGHT
		data->x /= 1.1;
	else if (keycode == 61 || keycode == 65451) // '+' key
		data->zoom *= 1.1;
    else if (keycode == 45 || keycode == 65453) // '-' key
		data->zoom /= 1.1;

	printf("zoom = %lf\n", data->zoom);
	data->offset_x = data->x;
	data->offset_y = data->y;
	printf("zoom x = %lf = %lf", data->x, data->y);
    // mlx_clear_window(data->mlx, data->win);
    // julia_calc(&data);
    mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
	return (0);
}
