/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:13:14 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/30 14:36:06 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact(/* args */)
{
	this->_isInited = false;
	
}

Contact::~Contact()
{
}

void	Contact::display() const
{
	std::cout << "First name: ";
	std::cout << this->_firstName << std::endl;
	
	std::cout << "Last Name ";
	std::cout << this->_lastName << std::endl;
	
	std::cout << "Nickname: ";
	std::cout << this->_nickname << std::endl;
	
	std::cout << "Phone Number: ";
	std::cout << this->_phoneNumber << std::endl;
	
	std::cout << "Darkest Secret: ";
	std::cout << this->_darkestSecret << std::endl;
}

std::string Contact::_getShort(std::string str) const
{
	if (str.length() <= 10)
		return str;
	return (str.substr(0, 9) + ".");
}
void    Contact::view() const
{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << this->_getShort(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_getShort(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_getShort(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

std::string Contact::_getInput(std::string str) const
{
    std::string input = "";
    bool        valid = false;
	
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
		
        if (std::cin.good() && !input.empty())
            valid = true;
        else
		{
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
		
    } while (!valid);
	
    return (input);
}

void    Contact::init(void)
{
    std::cin.ignore();
	
    this->_firstName = this->_getInput("First Name: ");
    this->_lastName = this->_getInput("Last Name: ");
    this->_nickname = this->_getInput("Nickname: ");
    this->_phoneNumber = this->_getInput("Phone Number: ");
    this->_darkestSecret = this->_getInput("Darkest Secret: ");

	this->_isInited = true;
	
    std::cout << std::endl;
}