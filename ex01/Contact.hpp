#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string	_firstName;
    std::string	_lastName;
    std::string	_nickname;
    std::string	_phoneNumber;
    std::string	_darkestSecret;
	bool		_isInited;
    int			_index;

    std::string _printLen(std::string str) const;
    std::string _getInput(std::string str) const;
	std::string _getShort(std::string str) const;

public:
    Contact();
    ~Contact();
    void    init(void);
    void    view() const;
    void    display() const;
    void    setIndex(int i);
};

#endif