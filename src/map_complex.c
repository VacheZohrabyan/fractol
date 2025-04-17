/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:37:51 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/16 13:39:37 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void map_complex(int px, int py, t_fractal *data, double *zx, double *zy)
{
    double scale = 1.5 / (data->zoom > 0 ? data->zoom : 2);
    *zx = (px - WIDTH / 2.0) * scale / (WIDTH / 2.0) + data->offset_x;
    *zy = (py - HEIGHT / 2.0) * scale / (HEIGHT / 2.0) + data->offset_y;
}
