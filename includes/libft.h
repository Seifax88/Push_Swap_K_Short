/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:09:53 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 10:48:22 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	int				index;
	struct s_list	*next;

}	t_list;

size_t		ft_strlen(const char *s);

int			ft_isdigit(int c);

int			ft_atoi(const char *str);

long long	ft_atoll(const char *str);

char		**ft_split(char const *s, char c);

t_list		*ft_lstnew(void *content);

void		ft_lstadd_front(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);

t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstclear(t_list **lst, void (*del)(void *));

int			ft_sqrt(int number);

#endif