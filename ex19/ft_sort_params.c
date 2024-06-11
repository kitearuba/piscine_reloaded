/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:40:00 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/11 19:44:49 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_sort_params(char *str);

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
		ft_sort_params(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_sort_params(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[i] < str[j])
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
		j = 0;
	}
	while (*str)
		ft_putchar(*str++);
}
