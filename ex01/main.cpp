/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:18:02 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 16:37:28 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

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

		C.attack("Don't print");
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
}
