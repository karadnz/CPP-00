/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:52:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/27 17:16:20 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    std::string _getInput(std::string msg) const;
	std::string _getShort(std::string str) const;

public:
    Contact();
    ~Contact();
    void    init(void);
    void    display() const;
	void    displayFormatted() const;
    void    setIndex(int i);
};

#endif