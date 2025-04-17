/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:54:40 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/17 12:20:40 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int key_hook(int keycode, void *param)
{
	t_fractal *data = (t_fractal *)param;

	if (keycode == 65307) // ESC
		exit(0);
	else if (keycode == 65362) // UP
		data->offset_y -= 0.1;
	else if (keycode == 65364) // DOWN
		data->offset_y += 0.1;
	else if (keycode == 65361) // LEFT
		data->offset_x -= 0.1;
	else if (keycode == 65363) // RIGHT
		data->offset_x += 0.1;
	return (0);
}
