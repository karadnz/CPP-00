/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:20:22 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/27 16:49:05 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void upper(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
	{
        str[i] = toupper(str[i]);
    }
}

int main(int argc, char** argv)
{
    if (argc == 1)
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
	{
        std::string str = argv[i];
        upper(str);
		std::cout << str;
    }
	std::cout << std::endl;

    return 0;
}
