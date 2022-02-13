/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:00:51 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 18:04:57 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default DiamondTrap created" << std::endl;
	this->_name = ClapTrap::_name;
	this->ClapTrap::_name.append("_clap_name");
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondt) : ClapTrap(diamondt._name)
{
	std::cout << "Copy of DiamondTrap created" << std::endl;
	this->ClapTrap::_name.append("_clap_name");
	*this = diamondt;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap " << name << " created"  << std::endl;
	this->_name = name;
	this->ClapTrap::_name.append("_clap_name");
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Another DiamondTrap bites the dust."  << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &diamondt)
{
	std::cout << "DiamondTrap assignment."  << std::endl;
	this->_name = diamondt._name;
	this->_hp = diamondt._hp;
	this->_ep = diamondt._ep;
	this->_ad = diamondt._ad;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target) const
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name: " << this->_name << std::endl
		<< "Also my name: " << this->ClapTrap::_name << std::endl;
}
