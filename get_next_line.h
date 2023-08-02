/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:39:16 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/31 17:49:45 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_strlen(const char *str);
char	*ft_substr(char *s, int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_getline(char *s);
char	*ft_cutline(char *str);
int		nlcheck(const char *s);
char	*ft_read(char *str, int fd);

#endif