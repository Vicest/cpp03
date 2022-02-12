/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:16:15 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/12 21:36:00 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap created" << std::endl;
	this->_hp = 100;
	this->_ep = 1000;
	this->_ad = 30;
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
	this->_ep = 1000;
	this->_ad = 30;
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

void	ScavTrap::highFivesGuys(void)
{
	std::cout << this->_name << " requests a high five."  << std::endl;
}
