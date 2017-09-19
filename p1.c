/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:01:27 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 14:52:35 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../libft/libft.h"

void int_test(int (*test)(int), int (*real)(int), int input, int nb)
{
	int tr;
	int rr;

	tr = test(input);
	rr = real(input);
	printf("%d) %d == %d --> %d\n", nb, tr, rr, tr == rr);
}

void char_test(int (*test)(int), int (*real)(int), int input, int nb)
{
	int_test(test, real, input, nb);
}

void str_to_int_test(size_t (*test)(const char *), size_t (*real)(const char *), char * input, int nb)
{
	int tr;
	int rr;

	tr = test(input);
	rr = real(input);
	printf("%d) %d == %d --> %d\n", nb, tr, rr, tr == rr);
}

int main(void)
{
	int i;

	i = 1;

	printf("\n===ft_strlen===\n");
	str_to_int_test(&ft_strlen, &strlen, "Testing", i);
	str_to_int_test(&ft_strlen, &strlen, "", i);
	str_to_int_test(&ft_strlen, &strlen, "Redadsadf af", i);

	char *s1;
	char *s2;
	printf("\n===ft_strcmp===\n");
	s1 = "red";
	s2 = "blue";
	printf("%d) %d == %d --. %d\n", i++, ft_strcmp(s1, s2), strcmp(s1, s2), ft_strcmp(s1, s2) == strcmp(s1, s2));
	s1 = "";
	s2 = "blue";
	printf("%d) %d == %d --. %d\n", i++, ft_strcmp(s1, s2), strcmp(s1, s2), ft_strcmp(s1, s2) == strcmp(s1, s2));

	int n;
	printf("\n===ft_strncmp===\n");
	s1 = "red";
	s2 = "blue";
	n = 2;
	printf("%d) %d == %d --. %d\n", i++, ft_strncmp(s1, s2, n), strncmp(s1, s2, n), ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	s1 = "";
	s2 = "blue";
	n = 3;
	printf("%d) %d == %d --. %d\n", i++, ft_strncmp(s1, s2, n), strncmp(s1, s2, n), ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	s1 = "red";
	s2 = "blue";
	n = 0;
	printf("%d) %d == %d --. %d\n", i++, ft_strncmp(s1, s2, n), strncmp(s1, s2, n), ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));


	printf("\n===ft_atoi===\n");
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("-2147483648"), atoi("-2147483648"), ft_atoi("-2147483648") == atoi("-2147483648"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("2147483647"), atoi("2147483647"), ft_atoi("2147483647") == atoi("2147483647"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("0"), atoi("0"), ft_atoi("0") == atoi("-0"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("  34"), atoi("  34"), ft_atoi("  34") == atoi("  34"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("  -34"), atoi("  -34"), ft_atoi("  -34") == atoi("  -34"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("  +34"), atoi("  +34"), ft_atoi("  +34") == atoi("  +34"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi(" - 34"), atoi(" - 34"), ft_atoi(" - 34") == atoi(" - 34"));

	
	printf("\n===ft_isalpha===\n");
	char_test(&ft_isalpha, &isalpha, '1', i++);
	char_test(&ft_isalpha, &isalpha, ' ', i++);
	char_test(&ft_isalpha, &isalpha, 'a', i++);
	char_test(&ft_isalpha, &isalpha, 'Z', i++);
	char_test(&ft_isalpha, &isalpha, '/', i++);

	printf("\n===ft_isdigit===\n");
	char_test(&ft_isdigit, &isdigit, '1', i++);
	char_test(&ft_isdigit, &isdigit, ' ', i++);
	char_test(&ft_isdigit, &isdigit, 'a', i++);
	char_test(&ft_isdigit, &isdigit, 'Z', i++);
	char_test(&ft_isdigit, &isdigit, '/', i++);

	printf("\n===ft_isalnum===\n");
	char_test(&ft_isalnum, &isalnum, '1', i++);
	char_test(&ft_isalnum, &isalnum, ' ', i++);
	char_test(&ft_isalnum, &isalnum, 'a', i++);
	char_test(&ft_isalnum, &isalnum, 'Z', i++);
	char_test(&ft_isalnum, &isalnum, '/', i++);

	printf("\n===ft_isascii===\n");
	char_test(&ft_isascii, &isascii, '1', i++);
	char_test(&ft_isascii, &isascii, ' ', i++);
	char_test(&ft_isascii, &isascii, 'a', i++);
	char_test(&ft_isascii, &isascii, 'Z', i++);
	char_test(&ft_isascii, &isascii, '/', i++);
	char_test(&ft_isascii, &isascii, 345, i++);

	printf("\n===ft_isprint===\n");
	char_test(&ft_isprint, &isprint, '1', i++);
	char_test(&ft_isprint, &isprint, ' ', i++);
	char_test(&ft_isprint, &isprint, 'a', i++);
	char_test(&ft_isprint, &isprint, 'Z', i++);
	char_test(&ft_isprint, &isprint, '/', i++);
	char_test(&ft_isprint, &isprint, 345, i++);
	char_test(&ft_isprint, &isprint, 7, i++);
	char_test(&ft_isprint, &isprint, 127, i++);

	printf("\n===ft_toupper===\n");
	char_test(&ft_toupper, &toupper, '1', i++);
	char_test(&ft_toupper, &toupper, ' ', i++);
	char_test(&ft_toupper, &toupper, 'a', i++);
	char_test(&ft_toupper, &toupper, 'Z', i++);
	char_test(&ft_toupper, &toupper, '/', i++);
	char_test(&ft_toupper, &toupper, 345, i++);
	char_test(&ft_toupper, &toupper, 7, i++);
	char_test(&ft_toupper, &toupper, 127, i++);

	printf("\n===ft_tolower===\n");
	char_test(&ft_tolower, &tolower, '1', i++);
	char_test(&ft_tolower, &tolower, ' ', i++);
	char_test(&ft_tolower, &tolower, 'a', i++);
	char_test(&ft_tolower, &tolower, 'Z', i++);
	char_test(&ft_tolower, &tolower, '/', i++);
	char_test(&ft_tolower, &tolower, 345, i++);
	char_test(&ft_tolower, &tolower, 7, i++);
	char_test(&ft_tolower, &tolower, 127, i++);

	return (1);
}
