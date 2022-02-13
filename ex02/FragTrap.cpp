/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:16:15 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 17:32:01 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap created" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const &fragt) : ClapTrap(fragt._name)
{
	std::cout << "Copy of FragTrap created" << std::endl;
	*this = fragt;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->_name << " created"  << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Another FragTrap bites the dust."  << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &fragt)
{
	std::cout << "FragTrap assignment."  << std::endl;
	this->_name = fragt._name;
	this->_hp = fragt._hp;
	this->_ep = fragt._ep;
	this->_ad = fragt._ad;
	return (*this);
}

void	FragTrap::attack(std::string const &target) const
{
	if (this->_hp == 0)
		std::cout << "FragTrap " << this->_name << " has no HP!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< " causing " << this->_ad << "points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " requests a high five."  << std::endl;
}
