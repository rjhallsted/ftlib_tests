/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 15:54:22 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/23 23:20:12 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	int a; 
	int *p;
	t_list *item;

	a = 42;
	p = &a;
	item = ft_lstnew(p, sizeof(42));
	printf("42: %d\n", *(int *)item->content);
	printf("%d == %d --> %d", 42, *(int *)item->content, (*(int*)(item->content)) == 42);
	return (0);
}
