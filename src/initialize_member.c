/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_member.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:40:37 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/16 18:06:37 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void initialize_member(t_fractal** data)
{
    (*data)->zx = -2.0;
    (*data)->zy = -1.9;
    (*data)->color = 265;
    (*data)->zoom = 1.0;
    (*data)->max_iterator = 200;
    (*data)->offset_x = 0.0;
    (*data)->offset_y = 0.0;
}