# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 18:28:57 by kdoulyaz          #+#    #+#              #
#    Updated: 2022/03/20 23:37:32 by kdoulyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# __ MakeFile __

NAME	= push_swap

SRCS	= push_swap.c check_error.c create_stack.c do_sort.c helpers_2.c helpers.c index.c \
			mouves_a.c mouves_b.c mouves2.c quick_sort.c big_sort.c helpers_3.c

OBJS	= $(SRCS:.c=.o)

ICLS	= push_swap.h

CC		= @gcc -g

CFLAGS	= -Wall -Wextra -Werror

AR	= @ar -rcs

RM		= @rm -f


all:		$(NAME)

$(NAME):
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
			@echo "\033[0;92m{PUSH_SWAP} PROJECT FILE CREATED ✅"

clean:
			$(RM) $(OBJS)
			@echo "\033[0;93m{PUSH_SWAP} OBJECTS DELETED ❌"

fclean:		clean
			$(RM) $(NAME)
			@echo "\033[0;93m{PUSH_SWAP} PROJECT File DELETED ❌"

re:			fclean all

rebonus : fclean
.PHONY:		all clean fclean re
