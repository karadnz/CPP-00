/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:52:09 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/27 16:52:10 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact	_contacts[8];
	int		_index;
	int		_count;

    void	_add();
	void	_search() const;
	void	_exit();

	int		_getInput();
	void	_printMenu();
	void	_display() const;

	int		_getIndex() const;

	enum	_input
	{
		DEFAULT,
		ADD,
		SEARCH,
		EXIT
	};

public:
    PhoneBook();
    ~PhoneBook();
    void loop();
};

#endif

