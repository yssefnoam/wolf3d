/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:10:03 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/06 00:38:40 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;

	if (s)
	{
		i = ft_strlen(s);
		write(fd, s, i);
		write(fd, "\n", 1);
	}
}
