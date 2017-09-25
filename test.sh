# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 14:41:35 by rhallste          #+#    #+#              #
#    Updated: 2017/09/23 15:58:14 by rhallste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


make -C ../libft/
gcc -Wall -Werror -Wextra ../libft/libft.a p1.c -o p1
gcc -Wall -Werror -Wextra ../libft/libft.a p2.c -o p2
gcc -Wall -Werror -Wextra ../libft/libft.a bonus.c -o b
clear
./p1
./p2
./b