# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 19:18:04 by ohakon            #+#    #+#              #
#    Updated: 2022/03/07 03:55:07 by ohakon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	solong

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror

LIBFT_DIR	=	../libft
LIBFT_LIB	=	libft.a

HEADER		=	so_long.h
SRC			=	main.c \
				errors.c \

OBJ_DIR	=	obj
OBJ 		=	$(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

RM_DIR		=	rm -rf
RM_FILE		=	rm -f

INCLUDES	= 	-I .

${NAME}:	${OBJ}
			@$(CC) -o $(NAME) $(OBJ) $(FLAGS) ${LIBFT_DIR}/${LIBFT_LIB}
			@echo "\tCompiling...\t" [ $(NAME) ] $(SUCCESS)

$(OBJ)		:	| $(OBJ_DIR)

$(OBJ_DIR):
			@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o :	%.c $(HEADER) Makefile
					@${CC} $(FLAGS) $(INCLUDES) -o $@ -c $<

#COLORS
C_NO="\033[00m"
C_OK="\033[32m"
C_GOOD="\033[32m"

#DEBUG
SUCCESS		=	$(C_GOOD)SUCCESS$(C_NO)
OK			=	$(C_OK)OK$(C_NO)

all:	$(NAME)

clean:
		@${RM_DIR} ${OBJ_DIR}
		@echo "\tCleaning...\t" [ $(NAME) ] $(OK)

fclean:	clean
		@${RM_FILE} $(NAME)
		@echo "\tDeleting...\t" [ $(NAME) ] $(OK)

re:		fclean all

.PHONY: all clean fclean re

