/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:19 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 16:32:59 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<limits>
#include	"ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("It's a trap!"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapt)
{
	std::cout << "Copy of ClapTrap created" << std::endl;
	*this = clapt;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap " << this->_name << " created"  << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Another ClapTrap bites the dust."  << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clapt)
{
	std::cout << "ClapTrap assignment."  << std::endl;
	this->_name = clapt._name;
	this->_hp = clapt._hp;
	this->_ep = clapt._ep;
	this->_ad = clapt._ad;
	return (*this);
}

void	ClapTrap::attack(std::string const &target) const
{
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " has no HP!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< " causing " << this->_ad << "points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp < amount)
		amount = this->_hp;
	this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " has taken "
		<< amount << " HP damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	missing_hp = std::numeric_limits<unsigned int>::max() - this->_hp;

	if (missing_hp < amount)
		amount = missing_hp;
	this->_hp += amount;
	std::cout << "ClapTrap " << this->_name << " has repaired "
		<< amount << " HP!" << std::endl;
}
