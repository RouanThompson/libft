/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspcnspcl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 19:53:03 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 14:29:21 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspcnspcl(int c)
{
	unsigned char chtr;

	chtr = (unsigned char)c;
	if ((chtr >= ' ' && chtr <= '/') || (chtr >= '{' && chtr <= '~') ||\
			(chtr >= ':' && chtr <= '@') || (chtr >= '[' && chtr <= '`'))
		return (chtr);
	return (0);
}
