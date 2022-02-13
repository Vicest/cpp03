/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:16:15 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 17:14:51 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap created" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scavt) : ClapTrap(scavt._name)
{
	std::cout << "Copy of ScavTrap created" << std::endl;
	*this = scavt;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " created"  << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Another ScavTrap bites the dust."  << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scavt)
{
	std::cout << "ScavTrap assignment."  << std::endl;
	this->_name = scavt._name;
	this->_hp = scavt._hp;
	this->_ep = scavt._ep;
	this->_ad = scavt._ad;
	return (*this);
}

void	ScavTrap::attack(std::string const &target) const
{
	if (this->_hp == 0)
		std::cout << "ScavTrap " << this->_name << " has no HP!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< " causing " << this->_ad << "points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp == 0)
		std::cout << this->_name << " has no HP and can't HODOR" << std::endl;
	else
		std::cout << this->_name << " says: HODOR!" << std::endl;
}
