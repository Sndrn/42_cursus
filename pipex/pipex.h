/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:55:31 by santonie          #+#    #+#             */
/*   Updated: 2022/04/07 11:20:26 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <errno.h>
# include <stdarg.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_get_nbr_word(const char *str, char c);
void	ft_free_tab(char **tab, int n);
void	ft_get_words(char **tab, const char *str, char c, int n);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_printf(const char *str, ...);
int		ft_error_argc(int argc);
void	ft_error_fd(int fd, char argv[0]);
void	ft_error_cmd(char *path_cmd, char *cmd);
void	ft_process_one(int fdone, int fdtwo, char **argv, char **envp);
void	ft_process_two(int fdone, int fdtwo, char **argv, char **envp);

#endif
