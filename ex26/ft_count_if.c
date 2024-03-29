/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:23:36 by kwatanab          #+#    #+#             */
/*   Updated: 2018/11/07 14:23:39 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int y;
	int result;

	y = 0;
	result = 0;
	while (tab[y] != 0)
	{
		if (f(tab[y]) == 1)
			result++;
		y++;
	}
	return (result);
}
