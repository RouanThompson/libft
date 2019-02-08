/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 17:34:59 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/04 20:52:41 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *news1;

	if (!s1 || !s2 || !(news1 = (char *)malloc(ft_strlen(s1) +\
	ft_strlen(s2) + 1)))
		return (NULL);
	ft_strcpy(news1, s1);
	ft_strcpy((news1 + (ft_strlen(news1))), s2);
	return (news1);
}
