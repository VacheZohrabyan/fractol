/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:31:06 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/16 18:13:50 by vzohraby         ###   ########.fr       */
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
    char *name; //nkari anun@
    double zx;
    double zy;
    double x;
    double y;
    double offset_x;
    double offset_y;
    int bits_per_pixel; //inch biti mech pahel 
    int line_lenght; //erkarutyun@
    int color;
    int max_iterator;
    int it;
    int endian; //bayteri karg@
    double zoom;
}   t_fractal;

void chack_function(int argc, char **argv, t_fractal** data);
void image_display_julia(t_fractal **data);
void image_display_mandelbrot();
void initialize_member(t_fractal** data);
int julia_iterations(double zx, double zy, double cx, double cy, int max_iter);
void map_complex(int px, int py, t_fractal* data, double* zx, double* zy);
int julia_calc(t_fractal** data);

int mouse_hook(int buttom ,int x, int y, void *param);
int key_hook(int keycode, void *param);
#endif