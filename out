# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 17:10:30 by mberglun          #+#    #+#              #
#    Updated: 2019/11/12 10:12:47 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = testlib

# Directories, library and tests
SRC_DIR = ../getnextline/
OBJ_DIR = objs/
LIB_DIR = ../libft/

# Files, library and tests
SRC_FILES = get_next_line.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES:.c=.o))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))
MKDIR_P = mkdir -p

all: dirs $(NAME)

$(NAME): $(OBJS) main.c
	$(CC) $(CFLAGS) $(OBJS) main.c -o $(NAME) -I ./ -L../libft/ -lft

$(OBJS): $(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(SRC_DIR)

clean:
	-rm -rf $(OBJ_DIR)

fclean: clean
	-rm -f $(NAME)

re: fclean all

# Creates necessary directories as needed, ex. for objects.
dirs: $(OBJ_DIR)

$(OBJ_DIR):
	$(MKDIR_P) $(OBJ_DIR)
#end of file
