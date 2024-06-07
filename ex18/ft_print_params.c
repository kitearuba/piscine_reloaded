/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:05:20 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/07 14:34:14 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		write(2, "Error, wrong input!\n", 20);
		return (1);
	}
	while (argv[i] != NULL)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
