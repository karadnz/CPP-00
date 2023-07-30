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

