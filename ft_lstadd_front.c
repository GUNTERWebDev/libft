/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:16:34 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/04 11:16:38 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = (*lst);
    new = (*lst);
}
int main()
{
    t_list **head = NULL;
    char *s;
    s = "hello";
    head = (t_list **)ft_lstnew(s);
    (*head) = NULL;

    char *a;
    t_list *ptr = NULL;
    a = "world";
    ptr = ft_lstnew(a);
    ft_lstadd_front(head, ptr);
    while (ptr != NULL)
    {
        printf("%s ", ptr->content);
        ptr = ptr->next;
    }
}
