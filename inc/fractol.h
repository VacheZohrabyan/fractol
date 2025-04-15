/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:31:06 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/15 17:49:06 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../minilibx-linux/mlx.h"
#include "../inc/libft.h"

#define WIDTH 1920
#define HEIGHT 1080

typedef struct s_fractal {
    void *mlx; //mlxi het kap@
    void *win; //pointer bacvac patuhan
    void *img; //pointer en patker vori mech petqa nkarem
    char *addr; //pixseli hascen
    char *name;
    double zx;
    double zy;
    double zz;
    double x;
    double y;
    int bits_per_pixel; //inch biti mech pahel 
    int line_lenght; //erkarutyun@
    int img_widht;
    int img_height;
    int color;
    int max_iterator;
    int it;
    int endian; //bayteri karg@
    short zoom;
}   t_fractal;

void chack_function(int argc, char **argv, t_fractal** data);
void image_display_julia(t_fractal **data);
void image_display_mandelbrot();

#endif