/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_iteration.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:49:24 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/16 13:50:47 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int julia_iterations(double zx, double zy, double cx, double cy, int max_iter)
{
    int i = 0;
    while (zx*zx + zy*zy <= 4 && i < max_iter)
    {
        double xtemp = zx*zx - zy*zy + cx;
        zy = 2*zx*zy + cy;
        zx = xtemp;
        i++;
    }
    return i;
}