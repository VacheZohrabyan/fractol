NAME    = fractol

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = src/main.c \
			src/chack_function.c \
			src/image_display_julia.c \
			libft/ft_strlen.c \
			libft/ft_strncmp.c \
			libft/ft_strdup.c \
			#src/image_display_mandelbort.c \

OBJS    = $(SRCS:.c=.o)
HEADERS = inc/fractol.h

MLX     = -lmlx -lX11 -lXext -lm
MLX_DIR = minilibx-linux
MLX = -L$(MLX_DIR) -lmlx -lX11 -lXext -lm
INCLUDES = -I$(MLX_DIR) -Iinc

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

# For macOS:
# MLX     = -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(MLX)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
