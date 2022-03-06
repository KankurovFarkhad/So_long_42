# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 22:30:17 by ohakon            #+#    #+#              #
#    Updated: 2022/03/02 22:30:21 by ohakon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex

LIBFT_DIR	=	libft
LIBFT_LIB	=	libft.a

MAND_DIR	=	mandatory

RM_DIR		=	rm -rf
RM_FILE		=	rm -f

#COLORS
C_NO="\033[00m"
C_OK="\033[32m"
C_GOOD="\033[32m"

#DEBUG
SUCCESS		=	$(C_GOOD)SUCCESS$(C_NO)
OK			=	$(C_OK)OK$(C_NO)

all:
		@make -C ${LIBFT_DIR}/ all
		@make -C ${MAND_DIR}/ all
		@cp ${MAND_DIR}/${NAME} ${NAME}

clean:
		@make -C ${LIBFT_DIR}/ clean
		@make -C ${MAND_DIR}/ clean

fclean:
		@make -C ${LIBFT_DIR}/ fclean
		@make -C ${MAND_DIR}/ fclean
		@${RM_FILE} $(NAME)

re:		fclean all

.PHONY: all bonus clean fclean re

