/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:01:27 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 10:54:08 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft/libft.h"

int main(void)
{
	int i;

	i = 1;
	printf("\n===ft_atoi===\n");
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("-2147483648"), atoi("-2147483648"), ft_atoi("-2147483648") == atoi("-2147483648"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("2147483647"), atoi("2147483647"), ft_atoi("2147483647") == atoi("2147483647"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("0"), atoi("0"), ft_atoi("0") == atoi("-0"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("  34"), atoi("  34"), ft_atoi("  34") == atoi("  34"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("  -34"), atoi("  -34"), ft_atoi("  -34") == atoi("  -34"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi("  +34"), atoi("  +34"), ft_atoi("  +34") == atoi("  +34"));
	printf("%d) %d == %d --> %d\n", i++, ft_atoi(" - 34"), atoi(" - 34"), ft_atoi(" - 34") == atoi(" - 34"));


	printf("\n===ft_isdigit===\n");
	printf("%d) %d == %d --> %d\n", i++, ft_isdigit('1'), isdigit('1'), ft_isdigit('1') == isdigit('1'));
	printf("%d) %d == %d --> %d\n", i++, ft_isdigit('3'), isdigit('3'), ft_isdigit('3') == isdigit('3'));
	printf("%d) %d == %d --> %d\n", i++, ft_isdigit(' '), isdigit(' '), ft_isdigit(' ') == isdigit(' '));
	printf("%d) %d == %d --> %d\n", i++, ft_isdigit('a'), isdigit('a'), ft_isdigit('a') == isdigit('a'));
	printf("%d) %d == %d --> %d\n", i++, ft_isdigit('Z'), isdigit('Z'), ft_isdigit('Z') == isdigit('Z'));


	return (1);
}
