/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isunseen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 21:00:17 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 23:10:17 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isunseen(int c)
{
	unsigned char chtr;

	chtr = (unsigned char)c;
	if ((chtr >= 0 && chtr <= 31) || chtr == 127)
		return (chtr);
	return (0);
}
