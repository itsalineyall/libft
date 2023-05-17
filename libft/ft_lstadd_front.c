/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:42:33 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/17 02:17:25 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// essa função adiciona um elemento no inicio da lista
// lst: o endereço do ponteiro para o primeiro elemento da lista
// new: o endereço do ponteiro para o elemento a ser adicionado à lista

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst != NULL || new != NULL)
    {
        new->content = *lst;
        *lst = new;
    }
}
