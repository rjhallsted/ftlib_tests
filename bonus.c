/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 15:54:22 by rhallste          #+#    #+#             */
/*   Updated: 2017/10/27 16:39:16 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/inc/libft.h"

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
	t_list *itemdup;

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

	*p = 12;
	item = ft_lstnew(p, sizeof(int));
	*p = 24;
	item->next = ft_lstnew(p, sizeof(int));
	*p = 36;
	item->next->next = ft_lstnew(p, sizeof(int));
	printf("Before:\n");
	print_list(item);
	printf("After (12 -> 36 -> 24 ->):\n");
	item = ft_lst_swap(&item, 2, 1);
	print_list(item);

 	item = ft_lst_swap(&item, 2, 2);
 	printf("After (12 -> 36 -> 24 ->):\n");

	printf("\n===ft_lstdup===\n");
	itemdup = ft_lstdup(item);
 	print_list(itemdup);
 	free(item->next->next->content);
 	free(item->next->next);
 	free(item->next->content);
 	free(item->next);
 	free(item->content);
 	free(item);

	printf("\n===ft_arraylen===\n");
	char stringy[] = "testing";
	printf("%s: %lu == %zu --> %d\n", stringy, strlen(stringy), ft_arraylen(stringy), strlen(stringy) == ft_arraylen(stringy));

	return (0);
}
