/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:17:47 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/17 15:42:20 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int mouse_hook(int buttom ,int x, int y, void* param)
{
    t_fractal* data = (t_fractal*)param;
	static int i;
    (void)x;
    (void)y;
    if (buttom == 4)
    {
        printf("mec %d\n", ++i);
        // if (data->zoom > 150)
        //     data->zoom += 1; 
            data->zoom += 1;
    }
    else if (buttom == 5)
    {
        printf("poqr %d\n", --i);
        // if (data->zoom > 150)
        //     data->zoom -= 0.5;
        if (data->zoom > 1)
            data->zoom -= 1;
    }
	return (0);
}