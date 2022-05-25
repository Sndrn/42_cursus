/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:53:37 by santonie          #+#    #+#             */
/*   Updated: 2022/03/31 16:53:56 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int	fd[2];
	int	pid1;
	int	pid2;

	if (ft_error_argc(argc) == 0)
		return (0);
	if (pipe(fd) == -1)
		return (0);
	pid1 = fork();
	if (pid1 < 0)
		return (0);
	if (pid1 == 0)
		ft_process_one(fd[0], fd[1], argv, envp);
	pid2 = fork();
	if (pid2 < 0)
		return (0);
	if (pid2 == 0)
		ft_process_two(fd[0], fd[1], argv, envp);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}
