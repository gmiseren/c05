/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmiseren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:16:03 by gmiseren          #+#    #+#             */
/*   Updated: 2021/12/13 17:18:49 by gmiseren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i < nb / i)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}
