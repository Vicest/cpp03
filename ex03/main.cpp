/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:18:02 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 17:59:00 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

static void	line(void)
{
	std::cout << std::endl;;
}

int	main(void)
{
	{
		ClapTrap	A;
		line();
		ClapTrap	B(A);
		line();
		ClapTrap	C("Terminator");
		line();

		A.attack("Sheep");
		line();
		C.attack("Nope, not a name");
		line();

		C.takeDamage(4);
		line();
		C.takeDamage(4);
		line();
		C.takeDamage(4);
		line();
		C.takeDamage(4);
		line();

		C.attack("Don't printr");
		line();

		C.beRepaired(3);
		line();
		C.beRepaired(3);
		line();
		C.beRepaired(3);
		line();
		C.beRepaired(3);
		line();
		C.beRepaired(3);
		line();

		C.takeDamage(100);
		line();
	}
	{
		ScavTrap	A;
		line();
		ScavTrap	B(A);
		line();
		ScavTrap	C("Terminator");
		line();
		ScavTrap	D(C);
		line();

		D.attack("Test");
		line();
		C.attack("Sheep");
		line();
		C.attack("Nope, not a name");
		line();

		C.takeDamage(30);
		line();
		C.takeDamage(30);
		line();
		C.takeDamage(30);
		line();
		C.takeDamage(30);
		line();

		C.attack("Don't print");
		line();

		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();

		C.guardGate();
		line();

		C.takeDamage(100000);
		line();

		C.guardGate();
		line();
	}
	{
		FragTrap	A;
		line();
		FragTrap	B(A);
		line();
		FragTrap	C("Terminator");
		line();
		FragTrap	D(C);
		line();

		D.attack("Test");
		line();
		C.attack("Sheep");
		line();
		C.attack("Nope, not a name");
		C.highFivesGuys();
		line();

		C.takeDamage(30);
		line();
		C.takeDamage(30);
		line();
		C.takeDamage(30);
		line();
		C.takeDamage(30);
		line();

		C.attack("Don't print");
		line();

		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();
		C.beRepaired(30);
		line();

		C.highFivesGuys();
		line();

		C.takeDamage(100000);
		line();

		C.highFivesGuys();
		line();
	}
	{
		DiamondTrap	Horrifying;
		line();
		DiamondTrap	Copy(Horrifying);
		line();
		DiamondTrap	Named("Mommy, I'm scared!");
		line();
		DiamondTrap	CopyNamed(Named);
		line();

		Horrifying.whoAmI();
		line();
		Copy.whoAmI();
		line();
		Named.whoAmI();
		line();
		CopyNamed.whoAmI();
		line();

		Named.attack("Bystander");
		line();
		Named.highFivesGuys();
		line();
		Named.guardGate();
		line();
		Named.takeDamage(1000);
		line();
	}
}
