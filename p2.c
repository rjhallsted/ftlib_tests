/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:35:18 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 16:14:15 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int main(void)
{
	int len;
	char *mem;
	printf("\n===ft_memalloc===\n");
	len = 5;
	mem = (char *)ft_memalloc(len);
	while (len > 0)
		printf("%c", mem[len--] + '0');
	printf("\n");

	printf("\n===ft_putchar===\n");
	ft_putchar('a');
	printf(" == a\n");
	ft_putchar('z');
	printf(" == z\n");
	ft_putchar('4');
	printf(" == 4\n");


	printf("\n===ft_putstr===\n");
	ft_putstr("test");
	printf(" == test\n");
	ft_putstr("other");
	printf(" == other\n");
	ft_putstr("ends ear\0ly");
	printf(" == ends ear\n");


	printf("\n===ft_putendl===\n");
	ft_putendl("test");
	ft_putendl("other");
	ft_putendl("ends ear\0ly");


	printf("\n===ft_putnbr===\n");
	ft_putnbr(1234);
	printf(" == 1234\n");
	ft_putnbr(-123456890);
	printf(" == -1234567890\n");
	ft_putnbr(-2147483648);
	printf(" == -2147483648\n");
	ft_putnbr(2147483647);
	printf(" == 2147483647\n");


	printf("\n===ft_putchar_fd===\n");
	ft_putchar_fd('a', 1);
	printf(" == a\n");
	ft_putchar_fd('z', 1);
	printf(" == z\n");
	ft_putchar_fd('4', 1);
	printf(" == 4\n");


	printf("\n===ft_putstr_fd===\n");
	ft_putstr_fd("test", 1);
	printf(" == test\n");
	ft_putstr_fd("other", 1);
	printf(" == other\n");
	ft_putstr_fd("ends ear\0ly", 1);
	printf(" == ends ear\n");


	printf("\n===ft_putendl_fd===\n");
	ft_putendl_fd("test", 1);
	ft_putendl_fd("other", 1);
	ft_putendl_fd("ends ear\0ly", 1);


	printf("\n===ft_putnbr_fd===\n");
	ft_putnbr_fd(1234, 1);
	printf(" == 1234\n");
	ft_putnbr_fd(-123456890, 1);
	printf(" == -1234567890\n");
	ft_putnbr_fd(-2147483648, 1);
	printf(" == -2147483648\n");
	ft_putnbr_fd(2147483647, 1);
	printf(" == 2147483647\n");

	return (1);
}
