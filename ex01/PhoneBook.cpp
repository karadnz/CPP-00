/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:49:15 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/27 18:09:28 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->_index = -1;
	this->_count = 0;	
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::loop()
{
	
	while(1)
	{
		//system("clear");
		this->_printMenu();
		switch (this->_getInput())
		{
		case PhoneBook::ADD:
			//std::cout << " selected ADD" << std::endl;
			system("clear");
			this->_add();
			break;
		case PhoneBook::SEARCH:
			//std::cout << "selected SEARCH" << std::endl;
			system("clear");
			this->_search();
			break;
		case PhoneBook::EXIT:
			//std::cout << "selected EXIT" << std::endl;
			system("clear");
			this->_exit();
			break;
		
		default:
			//std::cout << "selected DEFAULT" << std::endl;
			system("clear");
			break;
		}
	}

}

void	PhoneBook::_add()
{
	this->_index++;
	this->_count++;
	
	if (this->_count > 8)
		this->_count = 8;
		
	if (this->_index == 8)
		this->_index = 0;
		
	this->_contacts[this->_index].init();
	this->_contacts[this->_index].display();
}


void	PhoneBook::_exit()
{
	exit(0);
}

void	PhoneBook::_display() const
{
	std::cout << "INDEX:"<< this->_index << std::endl;

	std::cout << "|" << std::setw(10) << "Index" << std::flush;
    std::cout << "|" << std::setw(10) << "First name" << std::flush;
    std::cout << "|" << std::setw(10) << "Last name" << std::flush;
   	std::cout << "|" << std::setw(10) << "Nickname" << std::flush;
    std::cout << "|" << std::endl;
	for (int i = 0; i < this->_count; i++)
	{
		std::cout << "|" << std::setw(10) << i << std::flush;
		this->_contacts[i].displayFormatted();
	}
	std::cin.ignore();
}

int	PhoneBook::_getInput()
{
	std::cout << "Enter an input" << std::endl;
	std::string input;

	std::cin >> input;

	if (input.compare("ADD") == 0)
		return (PhoneBook::ADD);
	if (input.compare("SEARCH") == 0)
		return (PhoneBook::SEARCH);
	if (input.compare("EXIT") == 0)
		return (PhoneBook::EXIT);
	return (0);
}

void	PhoneBook::_printMenu()
{
	std::cout << std::endl
	<< std::endl
	<< std::endl << "----MENU----"
	<< std::endl << "ADD"
	<< std::endl << "SEARCH"
	<< std::endl << "EXIT"
	<< std::endl
	<< std::endl
	<< std::endl;
}

int     PhoneBook::_getIndex() const
{
    int     input = -1;
    bool    valid = false;
    do
    {
        std::cout << "contact index: " << std::flush;
        std::cin >> input;
		
		//-1 to exit
        if (std::cin.good() && ( (input >= 0 && input < this->_count)  || input == -1) )
		{
            valid = true;
        }
		else
		{
            std::cin.clear();
            //ignore until newline or max limit
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
		
    } while (!valid);
    return (input);
}

void    PhoneBook::_search() const
{
	this->_display();
    int i = this->_getIndex();
	if (i != -1)
    	this->_contacts[i].display();
}