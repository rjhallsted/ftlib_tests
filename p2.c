/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:20:06 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/22 16:02:43 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

void print_zvalues(char *s, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
		printf("%c", s[i++] + '0');
	printf("\n");
}

void shiftchar(char *c)
{
	*c += 1;
}

void shiftchar_byindex(unsigned int index, char *c)
{
	*c += index;
}

char cshiftchar(char c)
{
	return (c + 1);
}

char cshiftchar_byindex(unsigned int index, char c)
{
	return (c + index);
}


int main(void)
{
	printf("\n\n============================\n");
	printf("====     PART 2     ========\n");
	printf("============================\n");

	int len;
	char *mem;
	printf("\n===ft_memalloc===\n");
	len = 5;
	mem = (char *)ft_memalloc(len);
	while (len > 0)
		printf("%c", mem[len--] + '0');
	printf("\n");
	free(mem);	

	void **p1;
	void *p2;
	p2 = malloc(4);
	p1 = &p2;
	printf("\n===ft_memdel===\n");
	ft_memdel(p1);
	printf("%p\n", p2);
	free (p2);
	p1 = NULL;

	printf("\n===ft_strnew===\n");
	printf("000000: ");
	print_zvalues(ft_strnew(5), 6);

	printf("\n===ft_strdel===\n");
	char *ft_str;
	ft_str = ft_strnew(5);
	ft_strdel(&ft_str);
	printf("(null): %s\n", ft_str);

	printf("\n===ft_striter===\n");
	ft_str = strdup("aaaaaa");
	ft_striter(ft_str, &shiftchar);
	printf("bbbbbb: %s\n", ft_str);
	free(ft_str);

	printf("\n===ft_striteri===\n");
	ft_str = strdup("aaaaaa");
	ft_striteri(ft_str, &shiftchar_byindex);
	printf("abcdef: %s\n", ft_str);
	free(ft_str);

	printf("\n===ft_strmap===\n");
	ft_str = ft_strmap("aaaaaa", &cshiftchar);
	printf("bbbbbb: %s\n", ft_str);
	free(ft_str);

	printf("\n===ft_strimapi===\n");
	ft_str = ft_strmapi("aaaaaa", &cshiftchar_byindex);
	printf("abcdef: %s\n", ft_str);
	free(ft_str);

	printf("\n===ft_strequ===\n");
	printf("1: %d\n", ft_strequ("reddd", "reddd"));
	printf("0: %d\n", ft_strequ("red", "blue"));

	printf("\n===ft_strnequ===\n");
	printf("1: %d\n", ft_strnequ("reddd", "reddd", 5));
	printf("0: %d\n", ft_strnequ("red", "blue", 4));
	printf("1: %d\n", ft_strnequ("red", "reb", 2));
	printf("1: %d\n", ft_strnequ("green", "red", 0));
	printf("1: %d\n", ft_strnequ("", "", 4));
	printf("1: %d\n", ft_strnequ("", "", 1));
	printf("1: %d\n", ft_strnequ("red", "red", 24));

	printf("\n===ft_strclr=== (should be empty lines)\n");
	char *s1 = (char *)malloc(sizeof(char) * 4);
	s1 = strcpy(s1, "red");
	ft_strclr(s1);
	printf("%s\n", s1);
	free(s1);

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
