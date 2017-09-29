/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 15:54:22 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/28 19:38:57 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

static void print_list(t_list *item)
{
	while (item)
	{
		printf("%d -> ", *(int *)item->content);
		item = item->next;
	}
	printf("\n");
}

int	main(void)
{
	int a; 
	int *p;
	t_list *item;

	a = 42;
	p = &a;
	item = ft_lstnew(p, sizeof(int));
	printf("42: %d\n", *(int *)item->content);
	printf("%d == %d --> %d", 42, *(int *)item->content, (*(int*)(item->content)) == 42);

	printf("\n===ft_lst_swap===\n");
	*p = 21;
	item->next = ft_lstnew(p, sizeof(int));
	*p = 7;
	item->next->next = ft_lstnew(p, sizeof(int));
	printf("Before:\n");
	print_list(item);
	item = ft_lst_swap(&item, 1, 2);
	printf("After (42 -> 7 -> 21 ->):\n");
	print_list(item);
	printf("Before:\n");
	print_list(item);
	item = ft_lst_swap(&item, 0, 1);
	printf("After (7 -> 42 -> 21 ->):\n");
	print_list(item);
	free(item->next->next->content);
	free(item->next->next);
	free(item->next->content);
	free(item->next);
	free(item->content);
	free(item);

	*p = 12;
	item = ft_lstnew(p, sizeof(int));
	*p = 13;
	item->next = ft_lstnew(p, sizeof(int));
	printf("Before:\n");
	print_list(item);
	item = ft_lst_swap(&item, 0, 1);
	printf("After (13 -> 12 ->):\n");
	print_list(item);
	item = ft_lst_swap(&item, 0, 1);
	printf("After (12 -> 13 ->):\n");
	print_list(item);
	free(item->next->content);
	free(item->next);
	free(item->content);
	free(item);

	//test where si is before fi
	//test with list of length 1.
	//test where si == fi

	return (0);
}
