/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:57:48 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/20 18:23:22 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;

    if (lst && del)
    {
        current = *lst;
        while(current)
        {
            next = current->next; // guarda o proximo
            del(current->content); // deleta o conteudo
            free (current); // deleta o no
            current = next; // atualiza o current para o proximo
        }
        *lst = NULL;
    }
}
