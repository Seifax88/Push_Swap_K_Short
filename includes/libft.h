/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:09:53 by dgargant          #+#    #+#             */
/*   Updated: 2024/06/26 11:39:49 by dgargant         ###   ########.fr       */
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

size_t	ft_strlen(const char *s);

int	ft_atoi(const char *str);

char	**ft_split(char const *s, char c);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void *));

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//size_t	strlen_no_tab(const char *s);

//get_next_line functions
/*# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_substr(const char *s, unsigned int start, size_t len);

int		ft_strncmp(char *s1, char *s2, size_t n);

char	*ft_itoa(int n);*/

#endif