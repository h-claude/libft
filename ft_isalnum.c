/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:59:27 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/17 14:52:03 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_isalnum(int a)
{
	if (ft_isdigit(a) || ft_isalpha(a))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalnum('5'));
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('Z'));
	printf("%d", ft_isalnum('9'));
	printf("%d", ft_isalnum('0'));
	printf("%d", ft_isalnum('z'));
	printf("%d", ft_isalnum('@'));
	printf("%d", ft_isalnum('&'));
}
*/