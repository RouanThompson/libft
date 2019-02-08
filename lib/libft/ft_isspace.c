/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 16:17:56 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 22:58:43 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	unsigned char chtr;

	chtr = (unsigned char)c;
	if ((chtr >= '\t' && chtr <= '\r') || chtr == ' ')
	{
		return (chtr);
	}
	return (0);
}
