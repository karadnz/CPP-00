/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:20:22 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/27 15:05:41 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	upper(char *str);

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t i = 1; i < (size_t)ac; i++)
		{
			upper(av[i]);
		}
		std::cout << std::endl;
	}
	return (0);
}

void	upper(char *str)
{
	for (size_t i = 0; i < std::strlen(str); i++)
	{
		std::cout << (char)std::toupper(str[i]);
	}
	
}