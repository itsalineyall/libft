/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 01:16:33 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/17 02:15:08 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *newnode;

    newnode = (t_list *)malloc(sizeof(t_list));
    if (newnode == NULL)
        return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}