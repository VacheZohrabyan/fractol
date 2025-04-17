/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chack_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:21:26 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/16 14:08:30 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void chack_function(int argc, char **argv, t_fractal** data)
{
	if (argc != 2)
		exit(0);

	(*data)->mlx = mlx_init(); //grafikakan hamakargi het kap hastatelu hascen
	(*data)->win = mlx_new_window((*data)->mlx, WIDTH, HEIGHT, (*data)->name);
	(*data)->img = mlx_new_image((*data)->mlx, WIDTH, HEIGHT);
	(*data)->addr = mlx_get_data_addr((*data)->img, &((*data)->bits_per_pixel), &((*data)->line_lenght), &((*data)->endian));
	if (!ft_strncmp(argv[1], "julia", ft_strlen("julia")))
	{
		(*data)->name = ft_strdup("julia");
		initialize_member(data);
		image_display_julia(data);
	}
	// else if (!ft_strncmp(argv[1], "mandelbrot", ft_strlen("mandelbrot")))
	// {
		// 	image_display_mandelbrot();
		// }
	// mlx_put_image_to_window((*data)->mlx, (*data)->win, (*data)->img, 0, 0);
	mlx_put_image_to_window((*data)->mlx, (*data)->win, (*data)->img, 0, 0);
	
	printf("chack\n");
	mlx_loop((*data)->mlx);
	return ;
}


/*
	free name;
	free data;
*/
