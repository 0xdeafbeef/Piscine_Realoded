/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:20:14 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/22 21:21:55 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		check_on_erros(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*filename;
	int		f_descriptor;
	char	c[4096];

	if (check_on_erros(argc))
		return (137);
	filename = argv[1];
	f_descriptor = open(filename, O_RDWR);
	read(f_descriptor, c, 4096);
	ft_putstr(c);
	return (0);
}
