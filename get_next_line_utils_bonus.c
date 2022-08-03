/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <mraymond@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:17:26 by mraymond          #+#    #+#             */
/*   Updated: 2022/04/29 10:17:33 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = -1;
	while (++i < n)
		a[i] = '\0';
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*v;

	v = malloc(count * size);
	if (v == NULL)
		return (NULL);
	ft_bzero(v, count * size);
	return (v);
}

static int	mem_overlap(char *d, char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && &s[i] != d)
		i++;
	if (i == len)
		return (0);
	return (1);
}

//Copy src in dst for len char ovoiding overlaping problem
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;
	int		way;

	if (dst != NULL || src != NULL)
	{
		d = (char *)dst;
		s = (char *)src;
		i = 0;
		way = 1;
		if (mem_overlap(d, s, len))
		{
			i = len - 1;
			way = -1;
		}
		while (i < len)
		{
			d[i] = s[i];
			i += way;
		}
	}
	return (dst);
}
